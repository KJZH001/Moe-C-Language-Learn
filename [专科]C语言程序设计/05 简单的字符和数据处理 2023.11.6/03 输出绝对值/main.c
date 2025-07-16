#include <stdio.h>
int main()
{
    //输出绝对值
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    if (n < 0)
    {
        n = -n;
    }
    printf("绝对值为：%d\n", n);
}