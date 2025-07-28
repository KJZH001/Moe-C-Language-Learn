#include <iostream>
using namespace std;

// 这个项目中，我们将会测试If的三种特殊情况
int main()
{
    system("chcp 65001");
    // 情况1，没有返回
    cout << "情况1：\n";
    int a=0;
    if(a==1) // 很明显，a不等于1嘛
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

    /*
    我们可以规定这样的称呼来避免混淆
    a=20 a becames 20
    a==20 a equals 20
    */

    /*
    常见的比较运算符号有这些：
    > 大于
    < 小于
    >= 大于等于
    <= 小于等于
    == 相等
    != 不相等
    */

    // 请注意，多行语句时if一定要加大括号，否则if只会认为它的下一句是if的执行内容
    // 这是和Python有所不同的地方，对于c来说，缩进不是必须的

    system("pause");
    return 0;
}