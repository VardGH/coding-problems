//Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային արժեք։
//Մուտքագրված ամբողջ թվի համար իրականացնել ֆունկցիա, որը ստանում է int տիպի պարամետր և վերադարձնում է թվի թվանաշանների քանակը։ 

#include <stdio.h>

int count_digit(int num);

int main()
{
    int num = 0;
    printf("Input num: ");
    scanf("%d", &num);

    printf("digit = %d\n", count_digit(num));

    return 0;
}

int count_digit(int num)
{
    int count = 0;

    while (num) {
        num /=10;
        ++count;
    }
    return count;
}

