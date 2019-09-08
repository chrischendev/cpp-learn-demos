//
// Created by chris on 2019/9/8.
//

#include <iostream>
#include "../h/User.h"
#include "UserTest.h"
using namespace std;
//不能输入中文，真要命
void UserTest::mainTest() {
    test01();
}

void UserTest::test01() {
    UserModel userModel("乘法表", 41);
    cout << userModel.getName() << endl;
}
