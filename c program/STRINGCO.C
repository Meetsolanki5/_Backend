#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *s1,*s2,*s3;
	int x;
	clrscr();
	printf("\nEnter String S1 : ");
	gets(s1);
	strcpy(s2,s1);
	printf("\nAfter copy String S2 is %s",s2);
	x=strcmp(s1,s2);
	if(x==0)
	{
		printf("\nBoth String Are Same");
	}
	else
	{
		printf("\nBoth String Are Different");
	}
	printf("\nEnter String S3 : ");
	gets(s3);
	strcat(s1,s3);
	printf("\nAfter contactnation String s1 is %s",s1);
	strrev(s1);
	printf("\nAfter Reverse String S1 is %s",s1);
	getch();
}