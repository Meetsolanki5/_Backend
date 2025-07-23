#include<iostream.h>
#include<conio.h>

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}

void main()
{
	int x,y,ans;
	char op;
	clrscr();

	cout<<"\nEnter Value X : ";
	cin>>x;
	cout<<"\nEnter Operation sign : ";
	cin>>op;
	cout<<"\nEnter Value Y : ";
	cin>>y;

	switch(op)
	{
		case '+':
			cout<<"\nAddition : "<<add(x,y);
			break;
		case '-':
			cout<<"\nSubtraction : "<<sub(x,y);
			break;
		case '*':
			cout<<"\nMultiplication : "<<mul(x,y);
			break;
		case '/':
			cout<<"\nDivision : "<<div(x,y);
			break;
		default:
			cout<<"\ninvalid Operation";
			break;
	}
	getch();
}