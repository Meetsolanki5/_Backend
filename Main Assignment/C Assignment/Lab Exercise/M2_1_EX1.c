#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,num;
	printf("\nEnter Value : ");
	scanf("%d",&a);
	printf("\nEnter Value : ");
	scanf("%d",&b);
	
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	
	printf("\nEnter the Number : ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			a+b;
			printf("\nAddition : %d",a+b);
			break;
			
		case 2:
			a-b;
			printf("\nSubtraction : %d",a-b);
			break;
			
		case 3:
			a*b;
			printf("\nMultiplication : %d",a*b);
			break;
			
		case 4:
			a/b;
			printf("\nDivision : %d",a/b);
			break;
			
		case 5:
			a%b;
			printf("\nModulus : %d",a%b);
			break;
			
			default:
				printf("\nInvalid Operator");
	}
	return 0;
}
