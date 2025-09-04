#include <iostream>
using namespace std;

int main()
{
    int a =10;
    int* ptr =&a;
    cout << *ptr; //?
    *ptr =5;
    cout << a; //?
    a =18;
    cout << *ptr;

    system("pause");
    return 0;
}