#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,isprime=1;
	
	printf("\nEnter the Number: ");
	scanf("%d",&n);
	
	
	if(n%2==0)
	{
		isprime=0;
	}
	else
	{
		for(i=3;i<=n/2;i+=2)
		{
			if(n%i==0)
			{
				isprime=0;
				break;
			}
		}	
	}
	
	if (isprime)
	{
    	printf("%d is a prime number.\n", n);
	}
	else
	{
    	printf("%d is not a prime number.\n", n);
	}
	
	return 0;
}
