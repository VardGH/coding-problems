//Իրականացնել ֆունկցիա, որը ստուգում է՝ թիվը պարզ է, թե ոչ։
//Պարզ է համարվում այն թիվը, որը առանց մնացորդ կարող է բաժանվել ինքը իր վրա և մեկի վրա (մեկը պարզ թիվ չէ)։

#include <stdio.h>

int is_prime(int num);

int main()
{
    int a = 0;
    printf("Input num: ");
    scanf("%d", &a);

    printf("%d", a);
    is_prime(a) ? puts(" is prime") : puts(" is not prime");

    return 0;
}


int is_prime(int num)
{
    int prime = 1;
    if(num < 2) {
        prime = 0;
    }
    for (int i = 2; i <= num /2; ++i) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }
    return prime;
}
