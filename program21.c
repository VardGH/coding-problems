//Իրականացնել ֆունկցիա, որը վերադարձնում է փոխանցված ամբողջ թվի ֆակտորիալը: (Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>

long long int factorial(int num);
long long int recursive_factorial(int num);

int main()
{
    int num = 0;

    do {
        printf("Input num: ");
        scanf("%d", &num);
    } while(num <0);

    printf("(Iterative) factorial %d is %lld\n",num, factorial(num));
    printf("(Recursive) factorial %d is %lld\n",num, recursive_factorial(num));

    return 0;
}

long long int factorial(int num)
{
    long long int res = 1;
    for (int i = 2; i <= num; ++i) {
        res *= i;
    }
    return res;
}

long long int recursive_factorial(int num)
{
    int res = 1;
    if (num !=0 ) {
        res = num * recursive_factorial(num - 1);
    }
    return res;
}
