#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[50];
	int l1,i,count=0;
	clrscr();
	printf("\nEnter String S1 : ");
	gets(s1);
	//scanf("%s",&s1);
	printf("\nS1 : %s",s1);
	l1=strlen(s1);
	printf("\nLength Of String S1 : %d",l1);
	for(i=0;s1[i]!='\0';i++)
	{
		count++;
	}
	printf("\nLength Of String S1 : %d",count);
	getch();
}