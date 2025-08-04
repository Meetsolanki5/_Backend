			       /* recorsion */
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

void main()
{
	int fact,n;
	clrscr();
	printf("\nEnter N To Find Factorial : ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("\nFactorial Of %d = %d",n,fact);
	getch();
}