#include<stdio.h>
#include<conio.h>


void printLine();
void main()
{
	clrscr();
	printLine();
	printf("\nWelcome to User Define Function In C\n");
	printLine();
	getch();
}
void printLine()
{
	int i;
	for(i=0;i<40;i++)
	{
		printf("*");
	}
}