#include<iostream.h>
#include<conio.h>

float rectangle(float length,float width)
{
	return length*width;
}

void main()
{
	float length,width,area;
	clrscr();

	cout<<"\nEnter length Of Rectangle : ";
	cin>>length;
	cout<<"\nEnter Width Of Rectangle : ";
	cin>>width;

	area=rectangle(length,width);

	cout<<"\nArea Of Rectangle Is : "<<area;

	getch();
}