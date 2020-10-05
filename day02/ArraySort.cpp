/**
 * 数组逆排序
 */

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int i = 0;
    int start = 0;
    int end = 0;
    int arry[5] = { 1, 2, 3, 4, 5 };
    int temp[5] = {0};
    end = sizeof(arry) / sizeof(arry[start]) - 1;
    int size = end + 1;

    for (i = 0; i < size; i++)
        temp[start++] = arry[end--];

    cout << "before arry : \t";
    for (i = 0; i < size; i++)
        cout << arry[i] << "\t";
    cout << endl;

    cout << "after arry : \t";
    for (i = 0; i < size; i++)
        cout << temp[i] << "\t";
    cout << endl;

    return 0;
}
