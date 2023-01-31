//Իրականացնել ֆունկցիա, որը ստանում է ամբողջ թիվ և տպում դրա երկուական պատկերը էկրանին: (Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>

void iterative_binary(int num);
void recursive_binary(int num);

int main()
{
    int num = 0;
    printf("Input num: ");
    scanf("%d", &num);

    printf("(Iterative)Binary %d is ", num);
    iterative_binary(num);

    printf("(Recursive)Binary %d is ", num);
    recursive_binary(num);
    puts("");

    return 0;
}

void iterative_binary(int num)
{
    int binary_arr[32];
    int i = 0;
    while (num) {
        binary_arr[i] = num % 2;
        num /= 2;
        ++i;
    }

    for(int j = i - 1; j >= 0; --j) {
        printf("%d", binary_arr[j]);
    }
    puts("");
}

void recursive_binary(int num)
{
    int binary_arr[32];
    int i = 0;
    if (num > 0) {
        binary_arr[i] = num % 2;
        ++i;
        num /= 2;
        recursive_binary(num);
    }

    for(int j = i - 1; j >= 0; --j) {
        printf("%d", binary_arr[j]);
    }
//    puts("");
}
