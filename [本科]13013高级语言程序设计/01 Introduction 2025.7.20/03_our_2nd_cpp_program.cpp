#include <iostream> 
using namespace std; 

int main()
{
    int num1=13,num2=4;
    // 实际上num1+num2这一步系统还是分配了一个没有命名的暂存空间，然后才会被cout到控制台上
    // cout << num1+num2;
    // 我们也可以美化一下cout的输出，操作符是可以这样很多个一起串起来的
    cout << "The sum of " << num1 << " and " << num2 << " is "
        << num1 + num2 << "\n";

    // 你也不妨可以试一下假如我们不初始化值会发生什么
    int num3,num4;
    // 你在这里可能是看到任何值，然后过一段时间，例如你去开了什么别的软件，电脑重启过，或者干脆第二天再来运行，可能结果就变了
    // 至于为什么是你看到的值，完全就是巧合而已
    cout << "The sum of " << num3 << " and " << num4 << " is "
        << num3 + num4 << "\n";
    return 0;
}