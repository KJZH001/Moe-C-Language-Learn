#include <stdio.h>
int main()
{
	//判断大小写字母和其他字符
	char ch;
	printf("请输入一个字母：");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("是大写字母\n");
	else if(ch>="a" && ch<='z')
		printf("是小写字母\n");
	else
		printf("是其他字符\n");
}
