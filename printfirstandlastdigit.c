#include<stdio.h>
int main()
{
	int n,r,f;
    int first = n;
	printf("Enter a digit:");
	scanf("%d",&n);
	
		r=n%10;
		f=n;
	while(f>=10)
	{  
        	
		f = f/10;
		
		}
		printf("The last digit: %d",r);	
		printf("the first digit: %d",f);
	
	
	return 0;
}
