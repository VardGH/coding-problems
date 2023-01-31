//Գրիր ծրագիր, որը կստուգի երկու նույն չափսի զանգվածները նույնն են, թե ոչ։
//Այսինքն արդյոք բոլոր համապատասխանող ինդեքսներով արժեքները համընկնում են թե ոչ։

#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], const int size);
int is_same(int arr1[], int arr2[], const int size1, const int size2);

int main()
{
    int size1 = 0;
    printf("Input size1 : ");
    scanf("%d", &size1);

    int* arr1 = (int*) malloc (size1 * sizeof(int));
    for (int i = 0; i < size1; ++i) {
        printf("Input arr[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    print_arr(arr1, size1);

    int size2 = 0;
    printf("Input size2 : ");
    scanf("%d", &size2);

    int* arr2 = (int*) malloc (size2 * sizeof(int));
    for (int i = 0; i < size2; ++i) {
        printf("Input arr[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    print_arr(arr2, size2);

    is_same(arr1,arr2,size1,size2) == 1 ? printf("The same\n") : printf("Not the same\n");

    free(arr1);
    free(arr2);
    return 0;
}

void print_arr(int arr[], const int size)
{
    printf("Arr: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    puts("");
}

int is_same(int arr1[], int arr2[], const int size1, const int size2)
{
    if (size1 != size2) {
        return 0;
    }
    else {
        for (int i = 0; i < size1; ++i) {
            if (arr1[i] != arr2[i]) {
                return 0;
            }
        }
        return 1;
    }
}
