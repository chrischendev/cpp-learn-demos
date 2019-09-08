//
// Created by chris on 2019/9/8.
//

#include "../h/User.h"


UserModel::UserModel() {}

UserModel::UserModel(string name, int age) : name(name), age(age) {}

const string &UserModel::getName() const {
    return name;
}

void UserModel::setName(const string &name) {
    UserModel::name = name;
}

int UserModel::getAge() const {
    return age;
}

void UserModel::setAge(int age) {
    UserModel::age = age;
}
