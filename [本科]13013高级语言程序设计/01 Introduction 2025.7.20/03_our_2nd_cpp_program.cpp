#include <iostream> 
using namespace std; 

int main()
{
    int num1=13,num2=4;
    // 实际上num1+num2这一步系统还是分配了一个没有命名的暂存空间，然后才会被cout到控制台上
    cout << num1+num2;

    return 0;
}