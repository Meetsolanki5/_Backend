#include<stdio.h>
#include<conio.h>

struct Student
{
	char sname[30];
	int rno,marks;
};

int main()
{
	struct Student s;
	int i;
	
	printf("\nEnter the Student Details\n");
	for(i=0;i<3;i++)
	{
		printf("\nEnter Student %d Name : ",i+1);
		scanf("%s",s.sname);
		printf("\nEnter Student %d Roll No : ",i+1);
		scanf("%d",&s.rno);
		printf("\nEnter Student %d Marks : ",i+1);
		scanf("%d",&s.marks);
	}
	
	printf("\nStudent Details Are\n");
	for(i=0;i<3;i++)
	{
		printf("\nStudent Name : %s",s.sname);
		printf("\nStudent Roll No : %d",s.rno);
		printf("\nStudent Marks : %d\n",s.marks);
	}
	
	return 0;
}
