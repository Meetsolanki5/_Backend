                /* Loop */
#include<stdio.h>
#include<conio.h>

int main()
{
	int i=1;
	printf("\n---------------For Loop---------------");
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
	}
	
	printf("\n---------------While Loop---------------");
	while(i<=10)
	{
		printf("\n%d",i);
		i++;
	}
	
	printf("\n---------------Do While Loop---------------");
	do
	{
		printf("\n%d",i);
		i++;
	}while(i<=10);
	return 0;
}


