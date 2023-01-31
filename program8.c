//Գրեք ծրագիր որը թույլ կտա մուտքագրել որոշակի float տիպի փոփոխականի արժեք:
//Տպել էկրանին տվյալ float տիպի փոփոխականի հիշողության մեջ պահված երկուական կոդին համապատասխանող ամբողջ թվային (int) արտապատկերումը։


#include <stdio.h>

int main()
{
    float num = 0;
    printf("Input Num: ");
    scanf("%f", &num);

    void* ptr =  &num;
    int* ptr1 = ptr;
    printf("%d\n", *ptr1);

    return 0;
}
