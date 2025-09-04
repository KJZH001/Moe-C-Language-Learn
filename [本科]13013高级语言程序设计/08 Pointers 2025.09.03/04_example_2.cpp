#include <iostream>
using namespace std;

int main()
{
    int a =10;
    int* ptr1;
    int* ptr2;
    ptr1 = ptr2 = &a;
    cout << *ptr1 << "\n"; //?
    *ptr2 =5;
    cout << *ptr1 << "\n"; //?
    (*ptr1)++;
    cout << a << "\n"; //?
    

    system("pause");
    return 0;
}