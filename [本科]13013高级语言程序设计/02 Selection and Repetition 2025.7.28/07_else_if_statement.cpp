#include <iostream>
using namespace std;

// 这是一个使用else if()的例子
int main()
{
    int a =0;
    if(a<10)
    {
        cout << "a < 10";
    }
    else if(a>10)
    {
        cout << "a > 10";
    }
    else
    {
        cout << "a = 10";
    }
    system("pause");
}