/**
 * 二位数组
 */
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i = 0, j = 0;
    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 3; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
