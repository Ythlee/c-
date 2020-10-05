/**
 * 冒泡排序
 */
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;
    int arry[10] = {3, 1, 5, 7, 4, 6, 0, 8, 9, 2};
    int temp = 0;
    cout << "before arry\t";
    for (i = 0; i < 10; ++i)
        cout << arry[i];
    cout << endl;

    for (i = 0; i < 9; ++i) {
        for (j = 0; j < 9 - i; ++j) {
            if(arry[j] > arry[j + 1]) {
                temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
    }

    cout << "after arry\t";
    for (i = 0; i < 10; ++i)
        cout << arry[i];
    cout << endl;

    return 0;
}
