/**
 * C++中的输入
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    int num = 0;
    string str;

    cout << "Please input numbers:" << endl;
    cin >> num;
    cout << "num = " << num << endl;

    cout << "Please input String:" << endl;
    cin >> str;
    cout << "str = " << str << endl;

    return 0;
}
