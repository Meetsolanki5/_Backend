#include<stdio.h>
#include<conio.h>
#include<string.h>
int Npalindrome(int num) 
{
    int original = num, reversed = 0, digit;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main()
{
	char str[50],*s1,*s2;
	int a,n,choice;
	
	
	printf("Choose option:\n1. Check Number Palindrome\n2. Check String Palindrome\nEnter your choice: ");
    scanf("%d", &choice);
    
    if(choice==1)
    {
    	printf("\nEnter the Number : ");
    	scanf("%d",&n);
    	
    	if(Npalindrome(n))
    		{
    			printf("\nThe Number %d Is a Palindrome",n);
			}
			else
			{
				printf("\nThe Number %d Is Not a Palindrome",n);
			}
	}
	else if(choice==2)
	{
		printf("\nEnter String : ");
		gets(str);
		printf("\nEnter String S1 : ");
		gets(s1);
		strcpy(s2,s1);
		strrev(s1);
		
		
		a=strcmp(s1,s2);
		if(a==0)
		{
			printf("\nThe String %s is a Palindrome",s2);
		}
		else
		{
			printf("\nThe String %s is not a Palindrome",s2);
		}
	}
	else
	{
		printf("\nInvalid Choice");
	}
	return 0;
}

