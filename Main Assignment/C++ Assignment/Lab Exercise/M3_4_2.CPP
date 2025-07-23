#include<iostream.h>
#include<conio.h>

int factorial(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}

void main()
{
	int num;
	clrscr();

	cout<<"\nEnter Number : ";
	cin>>num;

	cout<<"\nFunctorial Of "<<num<<" Is : "<<factorial(num);
	getch();
}