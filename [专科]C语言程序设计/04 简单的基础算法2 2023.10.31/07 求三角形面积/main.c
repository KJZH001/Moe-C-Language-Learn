#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,s,area;
	// 求三角形面积
	printf("输入三角形的三条边长: ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形面积为: %.1f\n",area);

}
