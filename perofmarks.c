#include<stdio.h>
int main()
{
	float a,b,c,d,e,sum,tot=250,per;
	printf("Enter 5 marks:");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	printf("Sum is %f",sum);
	per = sum *100/tot;
	printf("Percentage is %f",per);
	if(per>=90&&per<=100)
	{
		printf("You got A plus");
	}
	else if(per>=80&&per<=89)
	{
		printf("You got A ");
	}
	else if(per>=70&&per<=79)
	{
		printf("You got B plus ");
	}
	else if(per>=60&&per<=69)
	{
		printf("You got B ");
	}
	else if(per>=50&&per<=59)
	{
		printf("You got C plus ");
	}
	else 
	{
		printf(" You Failed in the exam ");
	}
	return 0;
	
}
