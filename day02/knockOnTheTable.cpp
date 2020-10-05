/**
 * 敲桌子游戏
 * 从1开始数到100,但凡数字个位有7，或者十位有7,有或者该数是7的倍数，就打印出
 * ”敲桌子“,其他数直接数出
 */

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int i = 0;
    for (i = 1; i <= 100; i++) {
	if ((i % 7 == 0) || (i / 10 == 7) || (i % 10 == 7)) {
	    cout << "敲桌子\t";
	} else
	    cout << i << "\t";

		if (i % 10 == 0)
		    cout << endl;
    }

    return 0;
}
