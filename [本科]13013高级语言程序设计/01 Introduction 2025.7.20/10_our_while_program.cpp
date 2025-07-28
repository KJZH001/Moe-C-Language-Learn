#include <iostream>
using namespace std;

int main()
{
    // 这是由08_our_3rd_cpp_program修改而来
    // 在这个项目中，我们将会开始使用while
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