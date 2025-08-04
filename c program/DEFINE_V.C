			     /*Define Value*/
#include<stdio.h>
#include<conio.h>

void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void main()
{
	int a,b;
	clrscr();
	printf("\nEnter value : ");
	scanf("%d",&a);
	printf("\nEnter Value : ");
	scanf("%d",&b);
	printf("\nValue Before Swap Is %d & %d",a,b);
	printf("\nValue After Swap Is %d & %d",a,b);
	getch();
}