//Իրականացնել ֆունկցիա՝ որը կգտնի զանգվածի մեծագույն երեք տարրերը և կտպի էկրանին:

#include <stdio.h>
#include <stdlib.h>

void three_greatest(int *arr, const int size);
void swap(int *num1, int *num2);
void print_arr(int *arr, const int size);

int main()
{
    int size = 0;

    do {
        printf("Input size: ");
        scanf("%d", &size);
    } while (size < 0);

    int * arr = (int*) malloc(size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        printf("Input arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    printf("Arr: ");
    print_arr(arr, size);

    printf("Result: ");
    three_greatest(arr, size);

    free(arr);
    return 0;
}

void swap(int *num1, int *num2)
{
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

void print_arr(int *arr, const int size)
{
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    puts("");
}

void three_greatest(int *arr, const int size)
{
    for (int i = 1; i < size; ++i) {
        for (int j = i; j > 0; --j) {
            if (arr[j] > arr[j - 1]) {
                swap(&arr[j - 1], &arr[j]);
            }
        }
    }
    print_arr(arr, 3);
}
