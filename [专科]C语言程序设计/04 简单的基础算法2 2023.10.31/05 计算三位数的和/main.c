#include <stdio.h>
int main()
{
	int num,num1,num2,num3,sum;
	// 输入一个三位数，求这个三位数上每位数字之和
	printf("输入一个三位数：");
	scanf("%d",&num);
	num1=num/100;
	num2=num%100/10;
	num3=num%10;
	sum=num1+num2+num3;
	printf("你输入的三个数字为：%d%d%d",num1,num2,num3);
	printf("三位数的和为：%d",sum);
}
