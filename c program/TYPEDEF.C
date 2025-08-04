#include<stdio.h>
#include<conio.h>
#define c

void main()
{
	typedef int tops;
	tops a,b,c;

	clrscr();
	printf("\nEnter the value of A, B ,&C: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is max");
		}
		else
		{
			printf("\nC is max");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nB is max");
		}
		else
		{
			printf("\nC is max");
		}
	}
		getch();
	}