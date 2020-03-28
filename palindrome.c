#include<stdio.h>
int main()
{
	int n=1231,rev=0,r,n1;
	n1=n;
	
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d",rev);
	if(rev==n1)
	{
		printf(" it is a palindrom number");
	}
	else
	{
		printf("it is not a palindrome number");
	}
	return 0;
}
