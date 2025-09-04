#include <iostream>
using namespace std;

int main()
{
    /*
    为了避免指针出现这种预期之外的问题，我们也需要让指针像普通变量一样给个初始值
    */
    int* p2 = nullptr; //这里也可以换成 NULL 或者 0
    cout << "value of p2 = " << p2 << "\n"; //0
    cout << "address of p2 = " << &p2 << "\n"; //0x123450
    cout << "the variable pointed by p2 =" << *p2 << "\n"; //run-time error!

    system("pause");
    return 0;
}