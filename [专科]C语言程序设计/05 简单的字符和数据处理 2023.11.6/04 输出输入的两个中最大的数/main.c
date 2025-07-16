#include <stdio.h>
int main()
{
    // 输入两个数输出最大的数
    int a, b;
    printf("请输入两个数：");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("最大的数为：%d\n", a);
    else
        printf("最大的数为：%d\n", b);
}