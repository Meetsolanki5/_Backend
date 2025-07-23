#include<iostream.h>
#include<conio.h>

class Calc
{
	public:
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
};

void main()
{
	clrscr();
	int x,y;
	Calc c;

	cout<<"\nEnter Value X,Y : ";
	cin>>x>>y;

	cout<<"\nAddition : "<<c.add(x,y);
	cout<<"\nSubtraction : "<<c.sub(x,y);
	cout<<"\nMultiplication : "<<c.mul(x,y);
	cout<<"\ndivision : "<<c.add(x,y);

	getch();
}