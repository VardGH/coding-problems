//Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային արժեք։ Մուտքագրված ամբողջ թվի համար իրականացնել ֆունկցիա,
//որը ստանում է int տիպի պարամետր, որը էկրանաին կտպի տվյալ ամբողջ  թվին համապատասխանող՝ տասնվեցական կոդը։

#include <stdio.h>

void hexadecimal(int num);

int main()
{
    int num = 0;
    printf("Input num: ");
    scanf("%d", &num);

    hexadecimal(num);

    return 0;
}

void hexadecimal(int num)
{
    char hex[8];
    int i = 0;
    while (num != 0) {
        char tmp = num % 16;
        if (tmp < 10) {
            hex[i++] = tmp + 48;
        }
        else {
            hex[i++] = tmp + 55;
        }
        num /= 16;
    }

    for (int j = i - 1; j >= 0; --j) {
        printf("%c",hex[j]);
    }
    puts("");
}
