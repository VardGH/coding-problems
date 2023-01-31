//Գրեք ֆունկցիա, որը վերցնում է զանգվածը և դրա չափը և տպում զանգվածի տարրերը հակառակ հերթականությամբ: (Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>
#include <stdlib.h>

void print_iterative(const int *arr, const int size);
void print_recursive(const int *arr, const int size);

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
    print_iterative(arr, size);

    printf("Recursive print: ");
    print_recursive(arr, size);
    puts("");

    free(arr);
    return 0;
}

void print_iterative(const int *arr, const int size)
{
    for (int i = size - 1; i > -1; --i) {
        printf("%d ", arr[i]);
    }
    puts("");
}

void print_recursive(const int *arr, const int size)
{
    if (size > 0) {
        printf("%d ", arr[size - 1]);
        print_recursive(arr, size - 1);
    }
    return;
}
