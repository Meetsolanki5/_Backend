#include<stdio.h>
#include<conio.h>

int main()
{
	char sname;
	int rno,s1,s2,s3,total;
	double per;
	
	printf("\nEnter Student Name : ");
	gets(sname);
	printf("\nEnter Student Roll No : ");
	scanf("%d",&rno);
	printf("\nEnter Student Marks in Subject 1 : ");
	scanf("%d",&s1);
	printf("\nEnter Student Marks in Subject 2 : ");
	scanf("%d",&s2);
	printf("\nEnter Student Marks in Subject 3 : ");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;
	
	printf("\nStudent Name : %s",sname);
	printf("\nStudent Roll No : %d",rno);
	printf("\nStudent Total Marks : %d",total);
	printf("\nStudent Percantage : %lf",per);
	
	if(per>90)
	{
		printf("\nGRADE A");
	}
	else if(per>75 && per<=90)
	{
		printf("\nGRADE B");
	}
	else if(per>50 && per<=75)
	{
		printf("\nGRADE C");
	}
	else if(per<=50)
	{
		printf("\nGRADE D");
	}
	else
	{
		printf("\nFAIL");
		
	}
	
	return 0;
}
