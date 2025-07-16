#include <stdio.h>
int main()
{
	// 输入一个英文字母和一个整形数据i，输出它后面第i个字符
	char ch;
	int i;
	printf("输入一个字母: ");
	ch=getchar();
	printf("输入一个整数: ");
	scanf("%d",&i);
	printf("输出: ");
	putchar(ch+i);
}
