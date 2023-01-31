//Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային արժեք։
//Մուտքագրված ամբողջ թվի համար իրականացնել ֆունկցիա, որը ստանում է int տիպի պարամետր, որը էկրանաին կտպի տվյալ ամբողջ  թվին համապատասխանող՝ երկուական կոդը։ 
#include <stdio.h>

int binary(int num);

int main()
{
    int num = 0;
    printf("Input num: ");
    scanf("%d", &num);

    printf("%d\n", binary(num));
    return 0;
}

int binary(int num)
{
    int tmp = 0;
    while (num) {
        tmp = tmp *10 + num % 2;
        num /= 2;
    }
    return tmp;
}
