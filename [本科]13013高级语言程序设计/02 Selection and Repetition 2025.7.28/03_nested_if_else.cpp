// 本项目我们来一起看一个嵌套的if-else
#include <iostream>
using namespace std;

int main()
{
    cout << "please type thress num:";
    int a=0,b=0,c=0;
    cin >> a >> b >> c;
    if(a <= b)
    {
        if(a <= c)
        {
            cout << a << " is the smallest\n";
        }
        else
        {
            cout << c << " is the smallest\n";
        }
    }
    else
    {
        if(a <= c)
        {
            cout << b << " is the smallest\n";
        }
        else
        {
            cout << c << " is the smallest\n";
        }
    }

    system("pause");
}