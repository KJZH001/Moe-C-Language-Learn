/*
这个例子和cpp的功能是相同的，区别在于这个是c的例子
c语言中你不能使用iostream，也自然无法使用cin和cout这样的对象
*/
#include <stdio.h>

int main()
{
    int n1,n2,result;
    // 打印文本行到屏幕上
    printf("please input the two numbers:\n");
    // 扫描键盘输入，%d意味着期望为整数，后面需要跟随变量指针
    scanf("%d%d",&n1,&n2);
    result=n1*n2;
    printf("the result is : %d \n",result);
    // 自然，system函数也调用不了哩
    return 0;
}