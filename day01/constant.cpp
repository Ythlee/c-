/**
 * 常量的定义方式
 * 1、#define 鸿常量
 * 2、const修饰的变量
 */

#include <iostream>
using namespace std;

#define NUM 5

int main(int argc, char* argv[])
{
    const int NUM2 = 6;
    cout << "NUM = " << NUM << endl;
    cout << "NUM2 = " << NUM2 << endl;

    return 0;
}
