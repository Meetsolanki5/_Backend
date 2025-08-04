/*
	bubble short
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,temp;
	clrscr();
	printf("\nEnter Array Element\n");
	for(i=0;i<5;i++)
	{
		printf("enter %d element : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nArray element are\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] = %d",i,a[i]);
	}
	/*
		ascending order
	*/
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray element are in asceding order\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] = %d",i,a[i]);
	}

	/* desending order */
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray element are in desceding order\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] = %d",i,a[i]);
	}
	getch();
}