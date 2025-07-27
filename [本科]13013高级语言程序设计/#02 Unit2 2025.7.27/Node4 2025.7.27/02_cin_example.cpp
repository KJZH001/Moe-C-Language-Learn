#include <iostream>
using namespace std;

/*
这个例子有助于你理解c的链式调用是如何进行的
*/
int main()
{
    int n1, n2, n3;
    cout << "请输入三个数字: ";
    
    // 这三种写法是等价的：
    
    // 写法1：链式调用
    cin >> n1 >> n2 >> n3;
    // 注意，如果你这么写是错误的
    // cin >> n1,n2,n3;
    // 这么写的话实际上等同于 (cin >> n1),n2,n3; n2和n3拿不到输入的值
    
    // 写法2：分步执行（等价于上面）
    // cin >> n1;
    // cin >> n2; 
    // cin >> n3;
    
    // 写法3：显式使用返回值（理解用）
    // (cin >> n1) >> n2 >> n3;
    
    cout << "n1=" << n1 << ", n2=" << n2 << ", n3=" << n3 << endl;
    
    return 0;
}