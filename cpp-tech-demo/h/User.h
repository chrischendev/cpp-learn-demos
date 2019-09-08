//
// Created by chris on 2019/9/8.
//
#ifndef CPP_TECH_DEMO_USER_H
#define CPP_TECH_DEMO_USER_H

#include <string>
using namespace std;
class UserModel{
private:
    string name;
    int age;
public:
    UserModel();

    UserModel(string name, int age);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);
};


#endif //CPP_TECH_DEMO_USER_H
