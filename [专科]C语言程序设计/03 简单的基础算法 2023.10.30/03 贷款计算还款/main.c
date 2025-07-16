#include <stdio.h>
#include <math.h>
int main()
{
double y,r;
int a,n;
printf("请输入贷款总金额：");
scanf("%d",&a);
printf("请输入贷款总月数：");
scanf("%d",&n);
printf("请输入月利率：");
scanf("%lf",&r);
y=a*r*pow(1+r,n)/(pow(1+r,n)-1);
printf("每月的还款金额为：%.2lf。\n",y);
}
