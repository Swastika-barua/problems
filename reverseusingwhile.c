#include<stdio.h>
int main()
{
	int n=1234,rev=0,r;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("The reverse of number is %d",rev);
}
