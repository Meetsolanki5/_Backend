/*call by value*/
#include<stdio.h>
#include<conio.h>

void add(int a,int b)
{
	int c=a+b;
	printf("\n Addition : %d",c);
}
void main()
{
	int x,y;
	clrscr();
	printf("\nenter value : ");
	scanf("%d",&x);
	printf("\nenter value : ");
	scanf("%d",&y);
	add(x,y);
	getch();
}
