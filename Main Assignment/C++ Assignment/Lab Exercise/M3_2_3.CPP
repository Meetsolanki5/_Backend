#include<iostream.h>
#include<conio.h>


void main()
{
	int a,b;
	clrscr();

	cout<<"\nEnter Value A : ";
	cin>>a;
	cout<<"\nEnter Value B : ";
	cin>>b;

	cout<<"\n*********************************************************";
	cout<<"\nArithmetic Operators : ";
	cout<<"\na+b : "<<a+b;
	cout<<"\na-b : "<<a-b;
	cout<<"\na*b : "<<a*b;
	cout<<"\na/b : "<<a/b;
	cout<<"\na%b : "<<a%b;

	cout<<"\n*********************************************************";
	cout<<"\nRelational Operators : ";
	cout<<"\na == b : "<<(a == b);
	cout<<"\na!=b : "<<(a!=b);
	cout<<"\na>b : "<<(a>b);
	cout<<"\na<b : "<<(a<b);
	cout<<"\na>=b : "<<(a>=b);
	cout<<"\na<=b : "<<(a<=b);

	cout<<"\n*********************************************************";
	cout<<"\nlogical operator";
	cout<<"\na && b : "<<(a&&b);
	cout<<"\na||b : "<<(a||b);
	cout<<"\n!a : "<<(!a);

	cout<<"\n*********************************************************";
	cout<<"\nBitwise Operators : ";
	cout<<"\na&b : "<<(a&b);
	cout<<"\na|b : "<<(a|b);
	cout<<"\na^b : "<<(a^b);
	cout<<"\n~a : "<<(~a);
	cout<<"\na<<1 : "<<(a<<1);
	cout<<"\na>>1 : "<<(a>>1);

	getch();
}

