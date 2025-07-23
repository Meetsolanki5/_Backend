#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	float sum = 0,avg;
	
	printf("\nEnter number of Element : ");
	scanf("%d",&n);
	
	float number[n];
	
	printf("\nEnter %d number : ",n);
	for(i=0;i<n;i++)
	{
		printf("\nNumber %d : ",i+1);
		scanf("%f",&number[i]);
		sum += number[i];
	}
	
	avg = sum/n;
	
	printf("\n sum : %f",sum);
	printf("\n avg : %f",avg);
	
	return 0;
}

