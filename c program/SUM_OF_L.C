//sum of n loop

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,sum=0;
	clrscr();
	printf("\nEnter N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nSum : %d",sum);
	getch();
}