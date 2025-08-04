#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *f1;
	int rno,r;
	char *sname,*s;
	double per,p;
	clrscr();
	f1=fopen("tops1.txt","w");
	printf("\nEnter Name Of The Student : ");
	gets(sname);
	printf("\nEnter Roll No of the Student : ");
	scanf("%d",&rno);
	printf("\nEnter Perchantage Of the Student : ");
	scanf("%lf",&per);
	fprintf(f1,"%s %d %lf",sname,rno,per);
	fclose(f1);
	printf("\nFile written Successfully");

	f1=fopen("tops1.txt","r");
	fseek(f1,SEEK_END);
	printf("%ld",Ftell(f1));
	//fscanf(f1,"%s %d %lf",s,&r,&p);
	//printf("\nStudent Name : %s",s);
	//printf("\nRoll No : %d",r);
	//printf("\nPercentage : %lf",p);
	//fclose(f1);
	getch();
}