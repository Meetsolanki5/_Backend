#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[10],i;
	
	for(i=1;i<=10;i++)
	{
		printf("\nEnter Arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<=10;i++)
	{
		printf("\nArr[%d] value is : %d",i,arr[i]);
	}
	
	return 0;
}
