/**
 * 打印9×9乘法表
 */

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int i = 0;
    int j = 0;
    for (i = 1; i < 10; ++i) {
        for (j = 1; j <= i; ++j) {
            cout << j << "×" << i << "\t";
        }
        cout << endl;
    }
    return 0;
}
