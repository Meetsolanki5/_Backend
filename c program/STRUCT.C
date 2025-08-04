#include<stdio.h>
#include<conio.h>

struct student
{
	int rno,s1,s2,s3,total;
	double per;
	char *sname;
};
void main()
{
	struct student *s;
	clrscr();
	printf("\nEnter Student Name : ");
	gets(s->sname);
	printf("\nEnter roll No The Student : ");
	scanf("%d",&s->rno);
	printf("\nEnter Marks Of Subject 1 : ");
	scanf("%d",s->s1);
	printf("\nEnter Marks Of Subject 2 : ");
	scanf("%d",s->s2);
	printf("\nEnter Marks Of Subject 3 : ");
	scanf("%d",&s->s3);
	s->total=s->s1+s->s2+s->s3;
	s->per=s->total/3;

	printf("\nEnter Student Name %s",s->sname);
	printf("\nEnter total marks %d",s->total);
	printf("\nEnter student persentage %lf",s->per);

	if(s->per<=80)
	{
		printf("\ndistrection");
	}
	else if(s->per<=70)
	{
		printf("\nfirst class");
	}
	else if(s->per<=60)
	{
		printf("\nsecond class");
	}
	else if(s->per<=50)
	{
		printf("\nthird class");
	}
	else if(s->per<=40)
	{
		printf("\npass class");
	}

	getch();
}