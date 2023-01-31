//Իրականացնել ֆունկցիա, որը վերցնում է զանգվածը և դրա չափը և էկրանին տպում զանգվածի տարրերը: (Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>
#include <stdlib.h>

void print_arr(const int *arr, const int size);
void print_arr_recursive(const int *arr, const int size);

int main()
{
    int size = 0;

    do {
        printf("Input size: ");
        scanf("%d", &size);
    } while (size <= 0);

    int *arr = (int*) malloc(size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        printf("Input arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Iterative print: ");
    print_arr(arr, size);

    printf("Recursive print: ");
    print_arr_recursive(arr, size);
    puts("");

    free(arr);
    return 0;
}

void print_arr(const int *arr, const int size)
{
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    puts("");
}

void print_arr_recursive(const int *arr, const int size)
{
    static int i = 0;
    if (i < size) {
        printf("%d ", arr[i++]);
        print_arr_recursive(arr, size);
    }
    return;
}
