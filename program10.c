//Իրականացնել ֆունկցիա, որը վերցնում է երկու ամբողջ թիվ և վերադարձնում այդ միջակայքի միջև եղած թվերը։

#include <stdio.h>

void print_range(int a, int b);

int main()
{
    int a = 0;
    printf("Input a: ");
    scanf("%d", &a);

    int b = 0;
    printf("Input b: ");
    scanf("%d", &b);

    print_range(a, b);
    return 0;
}

void print_range(int a, int b)
{
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    for(int i = min ; i <= max; ++i) {
        printf("%d ", i);
    }
    puts("");

}
