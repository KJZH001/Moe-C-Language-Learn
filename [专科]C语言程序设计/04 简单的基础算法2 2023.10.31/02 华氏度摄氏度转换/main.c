#include <stdio.h>
int main()
{
	double F,R;
	// 输入一个华氏温度，要出输出摄氏温度。公式为c=5.0/9.0*（F-32）
	printf("输入一个华氏温度: ");
	scanf("%f",&F);
	R=5.0/9.0*(F-32);
	printf("输出: %f\n",R);
}
