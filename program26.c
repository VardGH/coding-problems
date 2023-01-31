//Իրականացնել ֆունկցիա, որն ընդունում է թիվ և վերադարձնում նրա թվանշանների գումարը: (Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>

int iterative_sum_digit(int num);
int recursive_sum_digit(int num);

int main()
{
    int num = 0;
    printf("Input num: ");
    scanf("%d", &num);

    printf("(Iterative) Sum digit %d == %d\n", num, iterative_sum_digit(num));

    printf("(Recursive) Sum digit %d == %d\n", num, recursive_sum_digit(num));
    return 0;
}

int iterative_sum_digit(int num)
{
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int recursive_sum_digit(int num)
{
    static int sum = 0;
    if (num > 0) {
        sum += num % 10;
        num /=10;
        recursive_sum_digit(num);
    }
    return sum;
}
