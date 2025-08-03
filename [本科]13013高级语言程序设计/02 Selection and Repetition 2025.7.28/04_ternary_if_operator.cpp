/*
题外话 X元的英文写法
ternary 三元
binary 二元
unerary 一元

三元表达式
condition ? operation A : operation B
如果一个事情是这样的吗？ 是的话执行A ： 不是的话执行B
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "please type thress num:";
    int a=0,b=0,c=0,min=0;
    cin >> a >> b >> c;
    // 03_nested_if_else的例子如果改成这种写法的话就是
    if(a <= b)
        a <= c ? min=a : min=c;
    else
        min = b <= c? b : c;

    system("pause");
}