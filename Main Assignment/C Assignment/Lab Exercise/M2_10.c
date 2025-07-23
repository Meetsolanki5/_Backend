#include<stdio.h>
#include<conio.h>

int main()
{
	int num,*p;
	
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	p=&num;

	printf("\nBefore Store Value In Pointer %d",num);
	
//	*p=100;
	printf("\nEnter The Pointer : ");
	scanf("%u",p);
	
	printf("\nAfter Store the Value Of Number %u",num);
	
	return 0;
	
}
