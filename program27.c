//Իրականացնել ֆունկցիա, որն ընդունում է թիվ, հաշվարկում և վերադարձնում է բոլոր բնական թվերի գումարը մինչև այդ թիվը։ (Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>

int iterative_sum(int num);
int recursive_sum(int num);

int main()
{
    int num = 0;

    do {
        printf("Input num = ");
        scanf("%d", &num);
    } while (num < 0);

    printf("(iterative)sum == %d\n", iterative_sum(num));

    printf("(recursive)sum == %d\n", recursive_sum(num));

    return 0;
}

int iterative_sum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }
    return sum;
}

int recursive_sum(int num)
{
    int sum = 0;
    if (num > 0) {
        sum += num + recursive_sum(num - 1);
    }
    return sum;
}
