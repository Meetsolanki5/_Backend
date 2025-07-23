#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s1[50],s2[50];
	int l1;
	
	printf("\nEnter String S1 : ");
	gets(s1);
	printf("\nEnter String S2 : ");
	gets(s2);
	
	strcat(s1,s2);
	printf("\nAfter the concatnation String is %s",s1);
	
	l1=strlen(s1);
	printf("\nAfter the Concatnation String Length Is %d",l1);
	
	return 0;
	
}
