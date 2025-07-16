#include <stdio.h>
int main()
{
    // x只鸡，y只兔，head为头的总数，foot为脚的总数
    int x,y,head,foot;
    printf("请输入鸡和兔总头数和总脚数：");
    scanf("%d%d",&head,&foot);
    y=(foot-2*head)/2;
    x=head-y;
    printf("鸡有%d只，兔有%d只。\n",x,y);
}
