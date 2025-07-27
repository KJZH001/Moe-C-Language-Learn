#include <iostream>
using namespace std;

int main()
{
    // 这个程序中，我们将会使用链式调用去完成05的两数相加的功能
    int num1=0, num2=0;
    cout << "Please enter two numbers, sparated by a white space : ";
    // 这里是链式调用，功能和分开写cin >> num1; cin >> num2;是一致的
    cin >> num1 >> num2;
    cout << "The sum is " << num1 + num2 << "\n";

    system("pause");
    return 0;
}