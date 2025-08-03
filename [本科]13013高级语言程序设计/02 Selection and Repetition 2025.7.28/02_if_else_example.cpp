#include <iostream>
using namespace std;

int main()
{
    // 这里我们来看一个if和else的例子
    int income=0,tax=0;
    cout << "please enter your income :";
    cin >> income;

    if(income <= 10000)
    {
        tax=0.02*income;
    }
    else
    {
        tax=0.08*(income-10000) +200;
    }

    cout << "Tax amount: $" << tax << "\n";

    system("pause");
}
