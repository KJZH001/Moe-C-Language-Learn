// 来尝试我们的第一个指针项目
#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int a =10;
    int* p1=&a;

    cout << "value of a = " << a << "\n"; //10
    cout << "value of p1 = " << p1 << "\n"; //0x123450
    cout << "address of a = " << &a << "\n"; //0x123450
    cout << "address of p1 = " << &p1 << "\n"; //0x543210
    cout << "value of the variable pointed by p1 = " << *p1 << "\n"; //10

    system("pause");
    return 0;
}