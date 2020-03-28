#include<stdio.h>
int main()
{
	int n=5,f=1;
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	printf(" the factorial of 5! is : %d",f);
	return 0;
}
