/*前置工作*/
#include <iostream> // 前置处理器
using namespace std; // 命名空间

/*
主函数
一个c++程序如果能够运行，必然有且只有一个主函数
*/
int main()
{
    /*
    cout是console output的意思，属于c++的预定义函数
    insertion operation << 可以看作为信息流，想把 “你好世界”给流到cout里去
    字符串，不用多说了qwq，不过c本身其实没有实际意义上的字符串（c++应该是有的），\n为换行符（废话
    \是转义字符，n指newline
    */
    cout << "Hello World! \n";
    cout << "I Love C++\n so much!";
    /*
    常见的换行符号
    \n 换到下一行
    \t 制表符 Tab键
    \b 退格键（平时用的删除）
    \a 一种警告声 A sound of alert
    \\ 反斜杠 \
    \' 单引号 '
    \" 双引号 "
    */

    // insertion operation也可以做链式嵌套，像这样
    cout << "我是第一行\n" << "我是第二行\n第三！";
    // 但是注意cout必须放到左边，下面这种写法编译器是不承认的哦
    // "我是第一行\n" << "我是第二行\n第三！" >> cout;

    return 0;
}