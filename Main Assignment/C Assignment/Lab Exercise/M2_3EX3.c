#include<stdio.h>
#include<conio.h>

int main()
{
	int n,sum=0;
	
	printf("\nEnter Value N : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		sum=sum+n;
		n--;
	}
	
	printf("\n sum : %d",sum);
	
	return 0;
}
