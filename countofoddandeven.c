#include<stdio.h>
int main()
{
	int ecount=0,ocount=0,n=1;
	while(n<=15)
	{
	  
	
				if(n%2==0)
				{
				   ecount++;
				  // n++;
				}
		
		
		
	
	else if(n%2==1)
	{
	
		
		ocount++;
	//	n++;
	
	
		
	}
	n++;
}
	printf("even count: %d\n",ecount);
    printf("odd count: %d",ocount);

	return 0;
}
