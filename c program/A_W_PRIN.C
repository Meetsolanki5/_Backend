			  /*Address With Pointer*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5];
	int *p,i;
	clrscr();
	printf("\nEnter Array Element\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Index Element : ",i);
		scanf("%d",&a[i]);
	}
	p=&a[0];
	printf("\nArray Variables With Thair Reapective Address\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] = %d & Address %u",i,a[i],p++);
	}
	getch();
}