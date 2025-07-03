#include<stdio.h>
#include<conio.h>

void main()
{

	int a,b,c;
	clrscr();

	printf("\n enter value of A: ");
	scanf("%d",&a);

	printf("\n enter value of B: ");
	scanf("%d",&b);

	c=a+b;
	printf("\nAdi: %d",c);

	c=a-b;
	printf("\nsub: %d",c);

	c=a*b;
	printf("\nmulti: %d",c);

	c=a/b;
	printf("\ndiv: %d",c);

	getch();
}