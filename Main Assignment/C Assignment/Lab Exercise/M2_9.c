#include<stdio.h>
#include<conio.h>

int main()
{
  	printf("\n---------------1D Array---------------");
	int number[5],i;
	
	printf("\n 1 D Array Element");
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Element : ",i);
		scanf("%d",&number[i]);
	}
		
		
	printf("\n---------------2D Array---------------");
	int a[3][3],i,j,sum=0;
	printf("\n2 D Array Element");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter %d Row And %d column : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n2 D Array Element Are\n");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
    }
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		sum += a[i][j];
		}
	}
	printf("\nSum : %d",sum);
	
	return 0;
}
