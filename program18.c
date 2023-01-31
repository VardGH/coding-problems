//Գրեք ծրագիր, որը տպում է ամբողջ թվային զանգվածի այն էլեմենտների արժեքները որոնք համարվում են պարզ թիվ:
//Պարզ է համարվում այն թիվը, որը առանց մնացորդ կարող է բաժանվել ինքը իր վրա և մեկի վրա (մեկը պարզ թիվ չի համարվում)։

#include <stdio.h>
#include <stdlib.h>

int is_prime(int num);

int main()
{
    int size = 0;
    printf("Input arr size: ");
    scanf("%d", &size);

    int *arr = (int*) malloc (size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        printf("Input arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; ++i) {
        if (is_prime(arr[i]) == 1) {
            printf("%d ", arr[i]);
        }
    }
    puts("");

    free(arr);
    return 0;
}

int is_prime(int num)
{
    int prime = 1;
    if (num < 2) {
        prime = 0;
    }

    for (int i = 2; i <= num/2; ++i) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }
    return prime;
}
