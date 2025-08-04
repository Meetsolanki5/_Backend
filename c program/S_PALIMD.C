#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *s1,*s2;
	int a;
	clrscr();
	printf("\nEnter String S1 : ");
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	printf("\nAfter reverse String is %s",s1);

	a=strcmp(s1,s2);
	if(a==0)
	{
		printf("\ngiven string is palimdrome");
	}
	else
	{
		printf("\ngiven string is not palimdrome");
	}
	getch();
}
