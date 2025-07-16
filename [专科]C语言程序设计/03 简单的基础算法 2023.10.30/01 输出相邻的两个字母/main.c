#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	ch=getchar();
	putchar(ch-1);
	putchar(ch+1);
}
