#include <stdio.h>
#define PI 3.14
int main()
{
	float r,area;
	printf("输入圆的半径: ");
	scanf("%f",&r);
	area = PI*r*r;
	printf("圆的面积为: %f.\n",area);
	return 0;
}
