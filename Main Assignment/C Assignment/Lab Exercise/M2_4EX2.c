#include<stdio.h>
#include<conio.h>

int main()
{
	int a[2][2],b[2][2],c[2][2];
	int m1[3][3],m2[3][3],sum[3][3];
	int i,j;
	
	printf("\naddition of matrix\n");
	
	printf("\nEnter A : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter Value a[%d],[%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter B : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter Value b[%d],[%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
	}
	
	printf("\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
	
	printf("\nA is:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nB is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nC is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d",c[i][j]);
		}
		printf("\n");
	}
	
	printf("\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
	
	printf("\nmultiplication of matrix\n");
	
	printf("\nEnter m1 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Value a[%d],[%d] : ",i,j);
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter m2 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Value b[%d],[%d] : ",i,j);
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=m1[i][j]*m2[i][j];
		}
		printf("\n");
	}
	
	printf("\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
	
	printf("\nm1 is:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",m1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nm2 is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nsum is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",sum[i][j]);
		}
		printf("\n");
	}
}
