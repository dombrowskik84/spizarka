#include "baseclass.h"
#include "qsqlerror.h"

BaseClass::BaseClass(QSqlDatabase& db, int id) : db(db), id(id)
{
    //this->db = db;
    //this->id = id;

    //unit test
    if(doesRecipeExist("Spaghetti Bolognese")){
        qDebug() << "unit test: ok";
    }
    else{
        qDebug() << "unit test: blad";
    }
}

BaseClass::~BaseClass()
{

    qDebug() << "Jestem w BaseClass";
}

bool BaseClass::doesTheIngredientExist(QString name)
{
    QSqlQuery query;
    query.prepare("SELECT name FROM ingredients WHERE userId IN (0,?) AND name = ?");
    query.addBindValue(id);
    query.addBindValue(name);
    query.exec();
    if(query.next()){
        return true;
    }
    return false;
}

bool BaseClass::doesRecipeExist(QString name)
{
    QSqlQuery query;
    query.prepare("SELECT name FROM crafting WHERE userId IN (0,?) AND name = ?");
    query.addBindValue(id);
    query.addBindValue(name);
    query.exec();
    if(query.next()){
        return true;
    }
    return false;
}

int BaseClass::searchIngrId(QString name)
{
    int ingrId;
    QSqlQuery query;
    query.prepare("SELECT id FROM ingredients WHERE userId IN (0,?) AND name = ?");
    query.addBindValue(id);
    query.addBindValue(name);
    query.exec();
    if(query.next()){
        ingrId = query.value(0).toInt();
        return ingrId;
    }
    return -1;
}

int BaseClass::searchCraftId(QString name)
{
    int craftId;
    QSqlQuery query;
    query.prepare("SELECT id FROM crafting WHERE userId IN (0,?) AND name = ?");
    query.addBindValue(id);
    query.addBindValue(name);
    query.exec();
    if(query.next()){
        craftId = query.value(0).toInt();
        return craftId;
    }
    return -1;
}

int BaseClass::searchResourceQuantity(QString name)
{
    int quantity;
    QSqlQuery query;
    QString question = "SELECT quantity FROM resources WHERE userId = ? AND ingrOrCraftBool = 0 AND ingrOrCraftId IN "
                       "(SELECT id FROM ingredients WHERE userId IN (0,?) AND name = ?);";
    query.prepare(question);
    query.addBindValue(id);
    query.addBindValue(id);
    query.addBindValue(name);
    query.exec();
    if(query.next()){
        quantity = query.value(0).toInt();
        return quantity;
    }
    return 0;
}

int BaseClass::getResourceQuantity(int resourceId, bool isIngredientFlag) {
    int ingrOrCraftBool = isIngredientFlag ? 0 : 1;

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM resources WHERE ingrOrCraftId = ? AND userId = ? AND ingrOrCraftBool = ?");
    checkQuery.addBindValue(resourceId);
    checkQuery.addBindValue(id);
    checkQuery.addBindValue(ingrOrCraftBool);
    checkQuery.exec();

    int count = 0;
    if (checkQuery.next()) {
        count = checkQuery.value(0).toInt();
    }

    if (count == 0) {
        return 0;
    }

    QSqlQuery query;
    query.prepare("SELECT quantity FROM resources WHERE ingrOrCraftId = ? AND userId = ? AND ingrOrCraftBool = ?");
    query.addBindValue(resourceId);
    query.addBindValue(id);
    query.addBindValue(ingrOrCraftBool);
    query.exec();

    if (query.next()) {
        return query.value(0).toInt();
    }
    return 0;
}
int BaseClass::getResourceId(QString resourceName, bool& isIngredientFlag) {
    if (isIngredient(resourceName)) {
        isIngredientFlag = true;
        return getIngredientId(resourceName);
    } else if (isRecipe(resourceName)) {
        isIngredientFlag = false;
        return getRecipeId(resourceName);
    }
    return -1;
}

int BaseClass::getIngredientId(QString ingredientName) {
    QSqlQuery query;
    query.prepare("SELECT id FROM ingredients WHERE name = ?");
    query.addBindValue(ingredientName);
    query.exec();

    if(query.next()) {
        return query.value(0).toInt();
    }
    return -1;
}

int BaseClass::getRecipeId(QString recipeName) {
    QSqlQuery query;
    query.prepare("SELECT id FROM crafting WHERE name = ?");
    query.addBindValue(recipeName);
    query.exec();

    if(query.next()) {
        return query.value(0).toInt();
    }
    return -1;
}

bool BaseClass::isIngredient(QString resourceName) {
    QSqlQuery query;
    query.prepare("SELECT id FROM ingredients WHERE name = ?");
    query.addBindValue(resourceName);
    query.exec();

    if(query.next()) {
        return true;
    }
    return false;
}

bool BaseClass::isRecipe(QString resourceName) {
    QSqlQuery query;
    query.prepare("SELECT id FROM crafting WHERE name = ?");
    query.addBindValue(resourceName);
    query.exec();

    if(query.next()) {
        return true;
    }
    return false;
}


bool BaseClass::deleteRecipe(int recipeId) {
    if(isRecipeUsedInResources(recipeId)) {
        qDebug() << "Attempt to delete a recipe that is used in resources.";
        return false;
    }

    QSqlQuery queryCheck(db);
    queryCheck.prepare("SELECT userId FROM crafting WHERE id = ?");
    queryCheck.addBindValue(recipeId);
    if(queryCheck.exec() && queryCheck.next()) {
        int ownerUserId = queryCheck.value(0).toInt();

        if(ownerUserId != id) {
            qDebug() << "Attempt to delete a recipe that does not belong to the user or is predefined.";
            return false;
        }
    } else {
        qDebug() << "Recipe does not exist.";
        return false;
    }

    db.transaction();
    QSqlQuery query(db);

    query.prepare("DELETE FROM crafting_ingredients WHERE craftingId = ?");
    query.addBindValue(recipeId);
    if(!query.exec()) {
        qDebug() << "Error deleting recipe ingredients:" << query.lastError();
        db.rollback();
        return false;
    }

    query.prepare("DELETE FROM crafting WHERE id = ? AND userId = ?");
    query.addBindValue(recipeId);
    query.addBindValue(id);
    if(!query.exec()) {
        qDebug() << "Delete recipe error:" << query.lastError();
        db.rollback();
        return false;
    }

    db.commit();
    return true;
}
bool BaseClass::isRecipeUsedInResources(int recipeId) {
    QSqlQuery query(db);
    query.prepare("SELECT COUNT(*) FROM resources WHERE ingrOrCraftId = ? AND ingrOrCraftBool = 1");
    query.addBindValue(recipeId);
    if(query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count > 0;
    }
    return false;
}

bool BaseClass::isIngredientUsedInRecipes(int ingredientId) {
    QSqlQuery query(db);
    query.prepare("SELECT COUNT(*) FROM crafting_ingredients WHERE ingredientId = ?");
    query.addBindValue(ingredientId);
    if(query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}
bool BaseClass::isIngredientUsedInResources(int ingredientId) {
    QSqlQuery query(db);
    query.prepare("SELECT COUNT(*) FROM resources WHERE ingrOrCraftId = ? AND ingrOrCraftBool = 0");
    query.addBindValue(ingredientId);
    if(query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}

bool BaseClass::deleteIngredient(int ingredientId) {
    if(isIngredientUsedInRecipes(ingredientId) || isIngredientUsedInResources(ingredientId)) {
        qDebug() << "Attempt to delete an ingredient that is used.";
        return false;
    }

    QSqlQuery query(db);
    query.prepare("DELETE FROM ingredients WHERE id = ? AND userId = ?");
    query.addBindValue(ingredientId);
    query.addBindValue(id);
    if(!query.exec()) {
        qDebug() << "Delete ingredient error:" << query.lastError();
        return false;
    }
    return true;
}

int BaseClass::getIngredientOwnerId(int ingredientId) {
    QSqlQuery query(db);
    query.prepare("SELECT userId FROM ingredients WHERE id = ?");
    query.addBindValue(ingredientId);
    if(query.exec() && query.next()) {
        return query.value(0).toInt();
    }
    return -1;
}

bool BaseClass::updateResourceQuantity(int resourceId, int quantityChange, bool isIngredient) {
    int ingrOrCraftBool = isIngredient ? 0 : 1;
    QSqlQuery query(db);

    int currentQuantity = getResourceQuantity(resourceId, isIngredient);
    int newQuantity = currentQuantity + quantityChange;

    if (newQuantity <= 0) {
        query.prepare("DELETE FROM resources WHERE ingrOrCraftId = ? AND userId = ? AND ingrOrCraftBool = ?");
        query.addBindValue(resourceId);
        query.addBindValue(id);
        query.addBindValue(ingrOrCraftBool);
    } else {
        query.prepare("UPDATE resources SET quantity = ? WHERE ingrOrCraftId = ? AND userId = ? AND ingrOrCraftBool = ?");
        query.addBindValue(newQuantity);
        query.addBindValue(resourceId);
        query.addBindValue(id);
        query.addBindValue(ingrOrCraftBool);
    }

    if (!query.exec()) {
        qDebug() << "Error updating resource quantity:" << query.lastError();
        return false;
    }

    return true;
}
