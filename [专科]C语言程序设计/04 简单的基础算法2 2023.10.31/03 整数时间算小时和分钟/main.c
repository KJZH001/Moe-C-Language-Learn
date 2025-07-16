#include <stdio.h>
int main()
{
	int minute,hour,minute_after;
	// 把整数分钟换算为a/60小时与a%60分钟
	printf("输入一个整数分钟时间: ");
	scanf("%d",&minute);
	hour=minute/60;
	minute_after=minute%60;
	printf("你输入的是%d小时,%d分钟\n",hour,minute_after);
}
