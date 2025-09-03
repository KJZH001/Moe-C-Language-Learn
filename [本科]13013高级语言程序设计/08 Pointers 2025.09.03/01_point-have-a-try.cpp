// 来尝试我们的第一个指针项目
#include <iostream>
using namespace std;

int main()
{
    /*
    指针指向的都是内存开头的位置
    对于32位电脑，那么是4个字节（4byte * 8bit = 32bit）
    对于64位电脑，那么是8个字节（8byte * 8bit = 64bit）

    2^32 byte=4GiB，这也是为何32位电脑最大只支持4G的记忆体（内存条）的原因
    */
    
    
   int a =5;
   double b=10.5;
   /*
   指针有两种写法
   int *aPtr=&a; 这是一种（*写在变量名前面）
   int* aPtr=&a; 这是另一种（*写在类型的后面）
   两种的效果都是同样的
   */
    int *aPtr=&a;
    double *bPtr=&b;
    
    // 栈堆是从高向低处分配
    // &的意思是，取出这个变量本身的地址

    cout << &a << "\n";
    cout << &b << "\n";
    cout << &aPtr << "\n";
    cout << &bPtr << "\n";

    system("pause");
    return 0;
}