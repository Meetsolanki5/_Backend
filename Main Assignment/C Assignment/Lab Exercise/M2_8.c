#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	return n*factorial(n-1);
}

int main()
{
	int n,fact;
	
	printf("\nEnter The Value : ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("\n Factorial Of %d = %d",n,fact);
	
	return 0;
		
}
