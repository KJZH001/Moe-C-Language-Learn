#include <stdio.h>
int main()
{
	char pass,ans;
	// China译成密码Glmre
	printf("输入密文：");
	scanf("%s",&pass);
	ans=pass+4;
	printf("明文为：");
	putchar(ans);
}

