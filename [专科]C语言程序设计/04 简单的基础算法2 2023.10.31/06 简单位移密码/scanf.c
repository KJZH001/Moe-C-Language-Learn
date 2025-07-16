#include <stdio.h>
int main()
{
	char str[50];
	printf("请输入一个字符串用于解密：");
	scanf("%s",str);
	printf("你输入的字符是：%s\n",str);

	for (int i = 0; str[i] != '\0'; i++) 
	{
        str[i]=str[i]+4; 
    }

	printf("解密后的字符是：%s\n",str);

}

