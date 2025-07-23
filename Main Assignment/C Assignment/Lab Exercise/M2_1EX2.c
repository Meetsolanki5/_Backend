#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	printf("\nNumber : %d",num);
	
	if(num%2==0)
	{
		printf("\nNumber is Even");
	}
	else
	{
		printf("\nNumber is Odd");
	}
	
	if(num>0)
	{
		printf("\nNumber is Positive");
	}
	else if(num<0)
	{
		printf("\nNumber is Negative");
	}
	else
	{
		printf("\nNumber is Zero");
	}
	
	if(num%3==0 && num%5==0)
	{
		printf("\nNumber is Multiple By Both 3 And 5");
	}
	else
	{
		printf("\nNumber is Not Multiple By Both 3 And 5");
	}
		return 0;
}
