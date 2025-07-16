#include <stdio.h>
int main()
{
    int n;
    printf("请输入取款金额：");
    scanf("%d",&n);
    printf("您的取款金额为%d元，正在出钞，请稍后...\n",n);
    return 0;
}
