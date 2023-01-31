//Իրականացնել ֆունկցիա, որը ունի հետևյալ նախատիպը (prototype): Ֆունկցիան վերադարձնում է num ամբողջ թվի exp աստիճանի արժեքը։
//int power (int num, int exp);

#include <stdio.h>

int power(int num, int exp);

int main()
{
    int num = 0;
    printf("Input num: ");
    scanf("%d", &num);

    int exp = 0;
    printf("Input exp: ");
    scanf("%d", &exp);

    printf("%d\n", power(num, exp));

    return 0;
}

int power(int num, int exp)
{
    int tmp = 1;
    for (int i = 0; i < exp; ++i) {
        tmp *= num;
    }
    return tmp;
}
