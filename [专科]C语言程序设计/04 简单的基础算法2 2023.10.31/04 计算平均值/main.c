#include <stdio.h>
int main()
{
	float goal1,goal2,goal3,goal4,goal5,average;
	// 输入五个单精度float的成绩，计算平均值并保留一位小数
	printf("输入五个人的分数成绩：");
	scanf("%f%f%f%f%f",&goal1,&goal2,&goal3,&goal4,&goal5);
	average=(goal1+goal2+goal3+goal4+goal5)/5;
	printf("平均分为：%.1f\n",average);
}
