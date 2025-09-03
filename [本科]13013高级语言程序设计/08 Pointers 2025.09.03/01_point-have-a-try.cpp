#include <iostream>
using namespace std;

int main()
{
    /*
    指针指向的都是内存开头的位置
    对于32位电脑，那么是4个字节（4byte * 8bit = 32bit）
    对于64位电脑，那么是8个字节（8byte * 8bit = 64bit）

    2^32 byte=4GiB，这也是为何32位电脑最大只支持4G的记忆体（内存条）的原因
    */
    int a =5;
    double b=10.5;
    int *aPtr=&a;
    double *bPtr=&b;

    cout << &a << "\n";
    cout << &b << "\n";
    cout << &aPtr << "\n";
    cout << &bPtr << "\n";

    system("pause");
    return 0;
}