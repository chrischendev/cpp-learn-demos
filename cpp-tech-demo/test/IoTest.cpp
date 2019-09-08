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
    test01();
}

void IoTest::test01() {
    fstream outfile;

    outfile.open("D:\\temp\\file\\cpp_io_test_01.txt");

    char *data = "i love feifei.";

    outfile << data << endl;
}
