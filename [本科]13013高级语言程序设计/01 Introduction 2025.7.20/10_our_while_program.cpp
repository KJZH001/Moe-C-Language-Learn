#include <iostream>
using namespace std;

int main()
{
    // 这是由08_our_3rd_cpp_program修改而来
    // 在这个项目中，我们将会开始使用while

    int num1=0, num2=0;
    cout << "Please enter two numbers, sparated by a white space : ";
    cin >> num1 >> num2;
    // 可以把while当成是一个会回来检查的if
    while(num1 > num2)
    {
        cout << "number 1 is " << num1 << "\n";
        num1 = num1 - 1;
    }
    
    cout << "\n";

    system("pause");
    return 0;
}