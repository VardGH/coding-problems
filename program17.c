//Իրականացնել ֆունկցիա, որը կստանա ամբոջ թվային արժեք և կվերադարձնի այդ թվի մեջից ամենա մեծ թվանաշանի արժեքը։
//Ֆունկցիայի վերադարձրած արդյունքը տպել էկրանին։

#include <stdio.h>

int greatest_digit(int num);

int main()
{
    int num = 0;
    printf("Input num: ");
    scanf("%d", &num);

    printf("Greatest digit in %d is %d\n", num, greatest_digit(num));

    return 0;
}

int greatest_digit(int num)
{
    int max = 0;
    while (num != 0) {
        int tmp_max = num % 10;
        num /= 10;

        if (tmp_max > max) {
            max = tmp_max;
        }
    }
    return max;
}
