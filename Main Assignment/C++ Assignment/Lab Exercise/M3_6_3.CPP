#include<iostream.h>
#include<conio.h>

class Person
{
	char name[50];
	int age;
	public:
		void getDetails()
		{
			cout<<"\nEnter Name : ";
			cin>>name;
			cout<<"\nEnter Age : ";
			cin>>age;
		}
		void showDetails()
		{
			cout<<"\nName is : "<<name;
			cout<<"\nAge Is : "<<age;
		}
};
class Student:public Person
{
	int rno;
	char course[50];
	public:
		void getStudentdetails()
		{
			getDetails();
			cout<<"\nEnter Roll No : ";
			cin>>rno;
			cout<<"\nEnter Course Name : ";
			cin>>course;
		}
		void showStudentdetails()
		{
			showDetails();
			cout<<"\nRoll No : "<<rno;
			cout<<"\nCourse : "<<course;
		}
};
class Teacher:public Person
{
	float sal;
	char *dept;
	public:
		void getTeacherdetails()
		{
			getDetails();
			cout<<"\nEnter Teacher Departmenrt : ";
			cin>>dept;
			cout<<"\nEnter Teacher Salary : ";
			cin>>sal;
		}
		showTeacherdetails()
		{
			showDetails();
			cout<<"\nDepartment Of Teacher : "<<dept;
			cout<<"\nSalary Of Teacher : "<<sal;
		}
};

void main()
{
	clrscr();
	Teacher t;
	Student s;

	cout<<"\nEnter Student Information";
	s.getStudentdetails();
	cout<<"\nEnter Teacher Information";
	t.getTeacherdetails();
	cout<<"\nStudent Information";
	s.showStudentdetails();
	cout<<"\nTeacher Information";
	t.showTeacherdetails();

	getch();
}