#include <stdio.h>
int main()
{
    // 输入三个数输出最大和最小的数
    int a, b, c;
    printf("请输入三个数：");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("最大的数为：%d\n", a);
            if(b>c)
                printf("最小的数为：%d\n", c);
            else
                printf("最小的数为：%d\n", b);
        }
        else
        {
            printf("最大的数为：%d\n", c);
            printf("最小的数为：%d\n", b);
        }
            
    }
    //a < b
    else
    {
        if (b > c)
        {
            printf("最大的数为：%d\n", b);
            if(a>c)
                printf("最小的数为：%d\n", c);
            else
                printf("最小的数为：%d\n", a);
        }
        else
        {
            printf("最大的数为：%d\n", c);
            printf("最小的数为：%d\n", a);
        }
    }
}