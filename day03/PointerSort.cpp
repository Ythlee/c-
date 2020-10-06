/**
 * 利用函数封装给数组从小到大进行冒泡排序
 */
#include <iostream>
using namespace std;

void sort(int *arr, int lenth)
{
    int i = 0, j = 0;
    int temp = 0;
    for (i = 0; i < lenth - 1; ++i) {
        for (j = 0; j < lenth - 1 - i; ++j) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int i = 0;
    int arr[10] = {2, 1, 5, 4, 3, 8, 7, 9, 0, 6};
    int *p = arr;
    cout << "before arr:\t";
    for (i = 0; i < 10; ++i) {
        cout << *p << "\t";
        p++;
    }
    cout << endl;

    sort(arr, 10);
    p = arr;
    cout << "after arr:\t";
    for (i = 0; i < 10; ++i) {
        cout << *p << "\t";
        p++;
    }
    cout << endl;

    return 0;
}
