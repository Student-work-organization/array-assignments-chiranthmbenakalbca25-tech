#include<stdio.h>

int fib(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

void main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("the %dth Fibonacci number is %d\n", n, fib(n));
}