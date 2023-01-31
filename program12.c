//Իրականացնել int տիպի արժեք վերադարձնող ֆունկցիա, որը վերադարձնում է՝ 1, 
//եթե ֆունկցային փոխանցված ամբողջ թիվը կարող է արտահայտվել երկու պարզ թվերի գումարով, հակառակ դեպքում ֆունկցիան կվերադարձնի՝ 0:

#include <stdio.h>
#include <stdlib.h>

void print_arr(const int arr[], const int size);
int is_prime(int num);
void prime_creator(int arr[], const int size);
int is_prime_sum(int *arr, int num);

int main()
{
    int num = 0;

    do {
        printf("input number: ");
        scanf("%d", &num);
    } while (num < 0);

    int* arr = (int*) malloc(num * sizeof(int));

    is_prime_sum(arr, num) == 1 ? puts("Yes") : puts("No");

    free(arr);
    return 0;
}

int is_prime(int num)
{
    int prime = 1;
    for (int i = 2; i <= num /2; ++i) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }
    return prime;
}


void print_arr(const int arr[], const int size)
{
    printf("Prime arr: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    puts("");
}


void prime_creator(int arr[], const int size)
{
    int x = 2;
    int count = 0;
    while (size != count) {
        if (is_prime(x)) {
            arr[count] = x;
            count++;
        }
        x++;
    }
}

int is_prime_sum(int * arr, int num)
{
    prime_creator(arr, num);

    int sum_prime = 0;
    for (int i = 0; i < num; ++i) {
        for (int j = i + 1; j < num; ++j) {
            if (arr[i] + arr[j] == num && arr[i] != arr[j]) {
                sum_prime = 1;
                break;
            }
        }
    }
    return sum_prime;
}
