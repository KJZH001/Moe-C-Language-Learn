#include <stdio.h>
int main()
{
    // 输入三条边，判断是什么三角形
    int a, b, c;
    printf("请输入三条边：");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
            printf("等边三角形\n");
        else if (a == b || b == c || a == c)
            printf("等腰三角形\n");
        else
            printf("普通三角形\n");
    }
    else
        printf("不是三角形\n");
}