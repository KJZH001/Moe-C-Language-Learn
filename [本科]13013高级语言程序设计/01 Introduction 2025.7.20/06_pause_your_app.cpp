#include <iostream>
using namespace std;

/*
这里是我额外加入的章节，这并不是台大课程中包含的
为了便于调试，让程序编译完毕后自动运行不会一闪而过（然后你再通过命令行去启动它看结果）
这里讲解两种用于暂停程序的方法
*/

int main()
{
    // 这里是一些代码……
    cout << "This is first line.\n";

    /*
    第一种：调用cmd的pause命令
    和你在bat中的效果是一致的，视编译器不同可能需要引入#include <cstdlib>
    仅限Windows平台上使用
    */
    system("pause");

    // 这里又是一些代码
    cout << "This is second line.\n";

    /*
    第二种：借用cin等待用户输入
    此方法在任何平台上都是有效的
    */
    std::cout << "Press Enter to continue...";
    std::cin.get();  // 等待用户按下 Enter 键

    // 这里还是一些代码
    cout << "This line will be missing.\n";
    return 0;
}