#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\n---------------Break Loop---------------");
	int i;
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			break;
		}
		printf("\n%d",i);
	}
	
	printf("\n---------------Continue Loop---------------");
	for(i=0;i<10;i++)
	{
		if(i==3)
		{
			continue;
		}
		printf("\n%d",i);
	}
}
