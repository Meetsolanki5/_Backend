#include<iostream.h>
#include<conio.h>

void main()
{
	int intvalue=10;
	float floatvalue=intvalue;
	clrscr();

	cout<<"\nImplicit Type Conversion : ";
	cout<<"\nInteger Value : "<<intvalue;
	cout<<"\nconverted To Float : "<<floatvalue;

	float pi=3.14;
	int intpi=(int)pi;

	cout<<"\nExplicit Type conversion : ";
	cout<<"\nfloat Value : "<<pi;
	cout<<"\nconverted To Int : "<<intpi;

	getch();
}