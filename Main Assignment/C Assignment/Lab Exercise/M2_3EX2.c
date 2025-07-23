#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,ans,range;
	
	printf("\nEnter Number : ");
	scanf("%d",&n);
	printf("\nEnter Range : ");
	scanf("%d",&range);
	
	if(range==0)
	{
		for(i=1;i<=10;i++)
		{
			ans=n*i;
			printf("\n %d * %d = %d",n,i,ans);
		}
	}
	else
	{
		for(j=1;j<=range;j++)
		{
			ans=n*j;
			printf("\n %d * %d = %d",n,j,ans);
		}
	}
	return 0;
}
