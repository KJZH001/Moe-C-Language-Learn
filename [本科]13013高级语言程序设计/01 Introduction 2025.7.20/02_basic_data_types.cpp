#include <iostream> 
using namespace std; 

/*
C++的基本数据类型
类别         类型    Bytes   类型           Bytes
integers    bool    1       long            4
            char    1       unsigned int    4
            int     4       unsigned short  2
            short   2       unsigned long   4
Franctional float   4       double          8
numbers 

前者为整数，后者为浮点数

类型不同，消耗的bytes空间自然也就不同
但实际上会消耗多少，这个和你使用的编译器有关，这并不是绝对的
（大概率应该会和上面的表格相同，但就算不同也不奇怪）
*/

int main()
{
    // 分开声明变量和赋值
    int myInt;
    myInt=10;
    // 你也可以一次性完成声明和初始化操作
    // 在C++最好这样，而不是不做初始化，如果你不初始化，这个变量的值你就是无法预估的，可能是任何值
    int yourInt=5;
    // 指派运算符 =

    // 你也可以一次性声明多个变量
    int a,b,c;
    // 或者也可以同时给他们指定不同的初始值
    int d=1,e=2,c=3;

    /*
    变量的命名要求
    1.不能以数字开始
    2.不能和C++的保留关键字重复
    3.只能包含数字、字母和下划线
    4.大小写敏感（a和A是两个不同的变量）
    5.如果可以，请永远给你的变量一个初始值（e.g., 0)
    6.总是使用有意义的名称
    7.建议使用驼峰式命名法 (e.g., yardToInch)
    */

    return 0;
}