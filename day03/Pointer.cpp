/**
 * const修饰的指针
 */
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int a = 10;
    int b = 10;

    const int *p1 = &a;
    //*p1 = 20;
    p1 = &b;


    int * const p2 = &a;
    *p2 = 20;
    //p2 = &b;
	
	const int * const p = NULL;
	//*p = 20;
	//p = &a;
    return 0;
}
