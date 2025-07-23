#include<stdio.h>
#include<conio.h>
#include<string.h>

int lergth(char str[])
{
	int i=0;
	while(str[i] !='\0')
	{
		i++;
	}
	return i;
}

int reverse(char str[])
{
	int start=0;
	int end=lergth(str)-1;
	char temp;
	
	while(start<end)
	{
		temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		
		start++;
		end--;
	}
}
int main()
{
	char str[50];
	
	printf("\nEnter the String : ");
	gets(str);
	
	reverse(str);
	
	printf("\nReverse string is %s",str);
	
	return 0;
}
