#include <iostream>
using namespace std;

int main()
{
    int num1=13,num2=4;

    cout << num1 + num2 << "\n";
    cout << num1 - num2 << "\n";
    cout << num1 * num2 << "\n";
    cout << num1 / num2 << "\n";
    cout << num1 % num2 << "\n";

    // cpp规定，数据类型会影响计算返回的结果
    // 例如我们上面num1和num2都是整数，所以返回的也一定是整数（小数部分会被无条件舍弃掉）
    // 假如你像下面这么写，结果还是3
    // int num1=13,num2=4.1;
    // 因为num2被定义为整数型，所以int num2=4.1的里面，还是4

    return 0;
}