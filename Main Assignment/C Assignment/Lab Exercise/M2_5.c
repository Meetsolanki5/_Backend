#include<stdio.h>
#include<conio.h>

int main()
{
	int num,month;
	printf("\nenter the number : ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("\nNumber is even\n");
	}
	else
	{
		printf("\nNumber is odd\n");
	}
	
	printf("\nEnter the month : ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			printf("\njanuary");
			break;
			
		case 2:
			printf("\nfebruary");
			break;
			
		case 3:
			printf("\nmarch");
			break;
			
		case 4:
			printf("\nApril");
			break;
			
		case 5:
			printf("\nmay");
			break;
			
		case 6:
			printf("\njune");
			break;
			
		case 7:
			printf("\njuly");
			break;
			
		case 8:
			printf("\nAugust");
			break;
			
		
		case 9:
			printf("\nseptember");
			break;
			
		
		case 10:
			printf("\noctober");
			break;
			
		
		case 11:
			printf("\nnovember");
			break;
			
		case 12:
			printf("\ndecember");
			break;
	
		default :
		printf("\ninvalid");
			
	}
	
	return 0;
}
