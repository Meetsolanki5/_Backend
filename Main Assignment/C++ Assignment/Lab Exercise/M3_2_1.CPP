#include<iostream.h>
#include<conio.h>

void main()
{
	const float PI=3.14;
	int age=20;
	float height=5.5;
	char grade='A';
	clrscr();

	cout<<"\nAge : "<<age;
	cout<<"\nHegiht : "<<height;
	cout<<"\ngrade : "<<grade;
	cout<<"\nPI : "<<PI;

	cout<<"\n******************************************************";
	age=age+2;
	cout<<"\nUpdate Age : "<<age;

	height=height+0.3;
	cout<<"\nUpdate Height : "<<height;

	getch();
}