#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,number;
	printf("\nEnter the Value : ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	printf("\nC : %d",c);
	
	printf("\nEnter the Number : ");
	scanf("%d",&number);
	
	switch(number)
	{
		case 1:
			if(a>=b && a>=c)
			{
				printf("\n %d is a largest number",a);
			}
			else if(b>=c && b>=a)
			{
				printf("\n %d is a largest number",b);
			}
			else
			{
				printf("\n %d is a largest number",c);
			}
		
		case 2:
			if(a<=b && a<=c)
			{
				printf("\n %d is a Smallest number",a);
			}
			else if(b<=c && b<=a)
			{
				printf("\n %d is a Smallest number",b);
			}
			else
			{
				printf("\n %d is a Smallest number",c);
			}
	}
	return 0;
	
}
