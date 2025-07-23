#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	char *name;
	float per;
	
	printf("\nEnter the Name : ");
	gets(name);
	printf("\nEnter the age : ");
	scanf("%d",&age);
	printf("\nEnter the percentage : ");
	scanf("%f",&per);
	
	printf("\nEnter Name : %s",name);
	printf("\nEnter Age : %d",age);
	printf("\nEnter Percentage : %f",per);
	
	return 0;
}
