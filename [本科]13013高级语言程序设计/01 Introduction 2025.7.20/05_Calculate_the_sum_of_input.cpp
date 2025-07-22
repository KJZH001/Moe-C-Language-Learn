#include <iostream>
using namespace std;

int main()
{
    // 从这个项目开始，我们就要用到cin（console input）来获取输入的值了！
    int num1=0, num2=0;

    cout << "Please enter one number: ";
    // extraction operator >>
    cin >> num1;
    cout << "Please enter another number: ";
    cin >> num2;

    // 其实你也可以在第一次输入的时候直接输入 "14 3" 再按回车
    // cpp规定会把空格作为区分，一次性输入多个数据，会把没有用到的输入先放到input buffer，在下一次cin的时候使用
    cout << "The sum is " << num1 + num2 ;
}