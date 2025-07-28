#include <iostream>
using namespace std;

// 这个项目中，我们将会测试If的三种特殊情况
int main()
{
    // 情况1，没有返回
    cout << "情况1：\n";
    int a=0;
    if(a==1)
    {
        cout << "here!\n";
    }

    // 情况2，返回了here
    cout << "情况2：\n";
    int b=0;
    if(b=1) //这里将1赋值给b后回传给了if，1即为true
    {
        cout << "here!\n";
    }

    // 情况3，没有返回
    cout << "情况3：\n";
    int c=0;
    if(c=0) //这里将0赋值给c后回传给了if，0即为false
    {
        cout << "here!\n";
    }

    system("pause");
    return 0;
}