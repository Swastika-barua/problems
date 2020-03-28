#include<stdio.h>
int main()
{
	int m1=41,m2=32,m3=39,m4=25,m5=29;
	float percentage;
	int c,sum,tot=250;
	sum=m1+m2+m3+m4+m5;
	printf("Sum is %d",sum);
	percentage = sum * 100/tot;
	printf("percentage is %f",percentage);
	return 0;
}
