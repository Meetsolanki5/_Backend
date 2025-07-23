#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;

	printf("\nEnter Value A : ");
	scanf("%d",&a);
	printf("\nEnter Value B : ");
	scanf("%d",&b);
	
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	
	c=a+b;
	printf("\nAddition: %d",c);
	
	c=a-b;
	printf("\nSubtraction : %d",c);
	
	c=a*b;
	printf("\nMultiplication : %d",c);
	
	c=a/b;
	printf("\nDivision : %d",c);
	
	// Relational Operators
	printf("\n---------------Relational operators---------------");
{
	
	if(a==b)
	{
		printf("\nTRUE");
	}
	else if(a!=b)
	{
		printf("\nFALSE");
	}
}
	if(a>b)
	{
		printf("\nA is Max");
	}
	else if(a<b)
	{
		printf("\nB is Max");
	}
	if(a>=b)
	{
		printf("\nBoth Are Same");
	}
	
	//logical operators
	printf("\n---------------Logical operators---------------");
	printf("\na&&b : %d",a&&b);
	printf("\na||b : %d",a||b);
	printf("\n!a : %d",!a);
	printf("\n!b : %d",!b);
	
	
		
	return 0;
}
