#include<iostream.h>
#include<conio.h>

void main()
{
	char *sname;
	int rno,marks;
	clrscr();

	cout<<"\nEnter Student Name : ";
	cin>>sname;
	cout<<"\nEnter Student Roll No : ";
	cin>>rno;
	cout<<"\nEnter Student Marks : ";
	cin>>marks;

	cout<<"\nStudent Details : ";
	cout<<"\nStudent Name : "<<sname;
	cout<<"\nStudent Roll No : "<<rno;
	cout<<"\nStudent Marks : "<<marks;

	if(marks>=80)
	{
		cout<<"\nGrade A";
	}
	else if(marks>=70)
	{
		cout<<"\nGrade B";
	}
	else if(marks>=60)
	{
		cout<<"\nGrade C";
	}
	else if(marks>=50)
	{
		cout<<"\nGrade D";
	}
	else if(marks>=40)
	{
		cout<<"\nGrade E";
	}
	else
	{
		cout<<"\nFAIL";
	}
	getch();
}