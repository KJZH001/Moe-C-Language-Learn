/*
这里的话我们展示一下04_ternary_if_operator的一些其他写法……
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "please type thress num:";
    int a=0,b=0,c=0,min=0;
    cin >> a >> b >> c;
    // 三元预算符不是很好看，你可以加一些括号来辅助阅读
    if(a<=b)
    {
        (a<=c) ? (min=a) : (min=c);
    }
    else
    {
        min=(a<=c ? b : c);
    }
    /*
    如果你想的话，三元运算符也可以嵌套
    但是不建议这么做，因为这会让代码非常难阅读

    min = a <= b ? a <= c ? a : c : b <= c ? b :c;
    min = (a <= b ? (a <= c ? a : c) : (b <= c ? b :c));

    */

    system("pause");
}