//Իրականացնել ֆունկցիա, որը ստանում է ամբողջ թիվ ու նրա ցուցիչի արժեքը և հաշվում այն:
//Ֆունկցիայի նախատիպը (prototype) ` «int accountPower (int base, int powerRaised);: (Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>

int iterative_accountPower (int base, int powerRaised);
int recursive_accountPower (int base, int powerRaised);

int main()
{
    int base = 0;
    printf("Input base: ");
    scanf("%d", &base);

    int power = 0;
    printf("Input base: ");
    scanf("%d", &power);

    printf("(iterative) Result: %d\n", iterative_accountPower(base, power));
    printf("(recursive) Result: %d\n", recursive_accountPower(base, power));
    return 0;
}

int iterative_accountPower(int base, int powerRaised)
{
    int res = 1;
    for (int i = 0; i < powerRaised; ++i) {
        res *= base;
    }
    return res;
}

int recursive_accountPower(int base, int powerRaised)
{
    static int tmp = 1;
    if (powerRaised != 0) {
        tmp = tmp *  base * recursive_accountPower(base, powerRaised - 1);
    }
    return tmp;
}
