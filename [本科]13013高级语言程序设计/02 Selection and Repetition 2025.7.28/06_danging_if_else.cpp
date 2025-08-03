#include <iostream>
using namespace std;

int main()
{
    // 请思考一下这段程式的含义
    int a=0,b=0;
    if(a==10)
        if(b==10)
            cout << "a and b are both ten.\n";
    else
        cout << "a is not ten.";
    /*
    如果是学过python的同学，那么可能会把else当成第一个if(a==10)的一部分
    但实际上它如果加上大括号应该是这样的

    if(a==10)
    {
        if(b==10)
            cout << "a and b are both ten.\n";
        else
            cout << "a is not ten.";
    }

    cpp严格规定，else一定紧跟着最接近的那个还没有其他else的if
    切记，cpp绝大多数时候对缩进不敏感
    */
}