#include<stdio.h>
#include<conio.h>

int fibonacci_recursive(int n) 
{
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int fibonacci_iterative(int n) 
{
    int a=0,b=1,c,i;

    if (n==0) return a;
    for (i=2;i<=n;i++) 
	{
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int print_fibonacci_series(int n)
{
	int i;
    printf("Fibonacci Series up to %d terms:\n", n);
    for(i=0;i<n;i++)
	{
        printf("%d ",fibonacci_recursive(i));
    }
    printf("\n");
}

int main() 
{
    int n;

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    print_fibonacci_series(n);

    int nth_recursive = fibonacci_recursive(n);
    printf("Nth Fibonacci number (recursive): %d\n", nth_recursive);

    int nth_iterative = fibonacci_iterative(n);
    printf("Nth Fibonacci number (iterative): %d\n", nth_iterative);

    return 0;
}

