//
// Created by chris on 2019/9/8.
//

#include "IoTest.h"
#include <iostream>
#include <fstream>

using namespace std;

/**
 * 文件输出
 */
void IoTest::mainTest() {
    test02();
}

/**
 * 测试写入文件
 */
void IoTest::test01() {
    ofstream outfile("D:\\temp\\file\\cpp_io_test_01.txt", ios::app);

    string data = "i love feifei.";

    outfile << data << endl;
}

/**
 * 测试读取文件
 */
void IoTest::test02() {
    fstream infile("D:\\temp\\file\\cpp_io_test_01.txt", ios::in);

    char buffer[1024];
    infile.read(buffer, sizeof(buffer)* sizeof(char));
    for (int i = 0; i < sizeof(buffer); ++i) {
        cout << buffer[i];
    }

}
