#include<stdio.h>
#include<conio.h>

void main()
{
	int rno,s1,s2,s3,total;
	double per;
	char sname[50];
	clrscr();
	printf("\nEnter student Name: ");
	gets(sname);
	printf("\nEnter student Roll No: ");
	scanf("%d",&rno);
	printf("\nEnter marks of subject 1: ");
	scanf("%d",&s1);
	printf("\nEnter marks of subject 2: ");
	scanf("%d",&s2);
	printf("\nEnter marks of subject 3: ");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;

	printf("\nStudent name: %s",sname);
	printf("\nRoll no: %d",rno);
	printf("\nTotal: %d",total);
	printf("\npercentage: %d",per);

	if(per>=70)
	{
		printf("\nDistinction");
	}
	else if(per>=60)
	{
		printf("\nFirst class");
	}
	else if(per>=50)
	{
		printf("\nSecond class");
	}
	else if(per>=40)
	{
		printf("\nPass class");
	}
	else
	{
		printf("\nfail");
	}
	getch();
}
