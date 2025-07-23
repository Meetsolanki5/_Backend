#include<stdio.h>
#include<conio.h>
factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

factorial_iterative(int n) 
{   
	int i;
	int result = 1;
	
	for (i=2;i<=n;i++) 
	{
        result *= i;
    }
    return result;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
	}
    unsigned long long fact_rec = factorial_recursive(num);
    printf("Factorial of %d using recursion: %llu\n", num, fact_rec);

    unsigned long long fact_iter = factorial_iterative(num);
    printf("Factorial of %d using iteration: %llu\n", num, fact_iter);


    return 0;
}

