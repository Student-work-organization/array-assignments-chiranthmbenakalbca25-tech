#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)   // base condition
        return 1;
    else
        return n * factorial(n - 1);   // recursive call
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial of %d = %d", num, result);

    return 0;
}