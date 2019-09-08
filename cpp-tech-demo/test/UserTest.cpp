//
// Created by chris on 2019/9/8.
//

#include <iostream>
#include "../h/User.h"
#include "UserTest.h"
using namespace std;
//不能输入中文，真要命 原来是跟cmd的字符集gbk不合，暂时没有很好的解决办法，那就只有在练习的时候不用中文
void UserTest::mainTest() {
    test01();
}

void UserTest::test01() {
    UserModel userModel("chenfabao", 41);
    cout << userModel.getName() << endl;
}
