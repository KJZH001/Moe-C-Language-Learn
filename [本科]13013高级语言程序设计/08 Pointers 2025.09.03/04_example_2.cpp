#include <iostream>
using namespace std;

int main()
{
    int a =10;
    int* ptr =&a;
    cout << *ptr << "\n"; //?
    *ptr =5;
    cout << a << "\n"; //?
    a =18;
    cout << *ptr << "\n";

    system("pause");
    return 0;
}