//Իրականացնել ֆունկցիա, որը ստանում է ամբողջ թվային պարամետր և վերադարձնում է n-րդ Ֆիբոնաչիի թիվը։ (Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>
#include <stdlib.h>

unsigned int iterative_fibonacci(int n);
unsigned int recursive_fibonacci(int n);

int main()
{
    int n = 0;

    do {
        printf("Input number: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Fibonacci %d == %d\n", n, iterative_fibonacci(n));

    printf("Recursive %d == %d\n", n, recursive_fibonacci(n));
    return 0;
}

unsigned int iterative_fibonacci(int n)
{
    int tmp  = 0;
    int fib1 = 0;
    int fib2 = 1;
    for (int i = 0; i < n; ++i) {
        tmp = fib1 + fib2;
        fib1 = fib2;
        fib2 = tmp;
    }
    return fib1;
}

unsigned int recursive_fibonacci(int n)
{
    if (n < 2) {
        return n;
    }
    return recursive_fibonacci(n-1) + recursive_fibonacci(n-2);
}
