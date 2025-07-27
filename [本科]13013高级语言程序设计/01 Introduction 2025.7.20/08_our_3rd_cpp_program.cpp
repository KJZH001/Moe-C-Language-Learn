#include <iostream>
using namespace std;

int main()
{
    // 这是我们的第三个程序，我们会在这里开始学习使用if和布尔表达式
    int num1=0, num2=0;
    cout << "Please enter two numbers, sparated by a white space : ";
    cin >> num1 >> num2;

    if(num1 > num2)
        cout << "The larger one is " << num1;
    if(num1 < num2)
        cout << "The larger one is " << num2;
    if(num1 == num2)
        cout << "The two are equal";
    
    cout << "\n";

    system("pause");
    return 0;
}