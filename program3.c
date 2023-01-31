//Հայտարարեք size ամբողջ թվային փոփոխական, որի արժեքը մուտքագրվելու է։ Ստեղծել size չափանի դինամիկ ամբողջ թվերի զանգված։
//Զանգվածի մեջ պահել դրական այն ամբողջ թվերը, որոնք համարվում են պարզ (սկսած ամենա փոքր պարզ թվից)։

#include <stdio.h>
#include <stdlib.h>

void print_arr(const int arr[], const int size);
int is_prime(int num);
void prime_creator(int arr[], const int size);

int main()
{
    int size = 0;

    do {
        printf("input size = ");
        scanf("%d", &size);
    } while (size < 0);

    int* arr = (int*) malloc(size * sizeof(int));

    prime_creator(arr, size);

    print_arr(arr, size);

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
