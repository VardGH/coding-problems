//Գրեք ծրագիր, որը ամբողջ թվային զանգվածի բոլոր զույգ էլեմենտները  նույն զանգվածի մեջ՝ կտեղավորի զանգվածի սկզբից, իսկ կենտերը վերջից:

#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], const int size);
void swap(int* num1, int* num2);
void even_odd(int arr[], const int size);

int main()
{
    int size = 0;
    printf("input size: ");
    scanf("%d", &size);

    int* arr = (int*) malloc (size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        printf("input arr[%d] = ", i);
        scanf("%d", (arr + i)); // arr[i]
    }

    print_arr(arr, size);

    even_odd(arr, size);

    printf("First the evens then the odd\n");
    print_arr(arr, size);

    free(arr);

    return 0;
}

void print_arr(int arr[], const int size)
{
    printf("arr: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    puts("");
}

void swap(int* num1, int* num2)
{
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

void even_odd(int arr[], const int size)
{
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2) {
            for (int j = size - 1; j >= i; --j) {
                if (arr[j] % 2 == 0) {
                    swap(&arr[i], &arr[j]);
                }
            }
        }
    }
}


