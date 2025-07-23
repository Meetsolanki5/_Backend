#include<iostream.h>
#include<conio.h>

int a=100;

void showGlobal()
{
	cout<<"\nGlobal Variable Is : "<<a;
	a+=20;
}
void showLocal()
{
	int b=70;
	cout<<"\nLocal Variable Is : "<<b;
}
void main()
{
	clrscr();
	showGlobal();
	showLocal();

	showGlobal();
	getch();
}
