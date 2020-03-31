#include<stdio.h>
int main()
{
 double n1,n2,result=0;
 char operator;
 printf("Enter the operators (+,-,*,/):");
 scanf("%c",&operator);
 printf("Enter two operands:");
 scanf("%lf %lf",&n1,&n2);
 
 switch(operator)
 {
 
    case '+':
    result=n1+n2;
 	break; 
 	
 	case '-':
    result=n1-n2;
 	break;
 	
 	case '*':
    result=n1*n2;
 	break;
 	
 	case '/':
    printf("The result is:",n1/n2);
 	break;
 	
 	default:
    printf("Operator is not correct");
 	}
 	printf("\n The result of %.1lf %c %.1lf = %.1lf",n1,operator,n2,result);
 		
 	return 0;
}
