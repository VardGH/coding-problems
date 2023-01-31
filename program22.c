//Իրականացնել ֆունկցիա, որը ընդունում է սիմվոլների զանգված որպես արգումենտ և ստանում է այդ զանգվածի շրաջված տարբերակը, նույն զանգվածի մեջ։
//(Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>

void rotate(char *arr, const int size);
void print_arr(const char *arr);

int main()
{
    char arr[] = "Hello world";

    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    print_arr(arr);

    rotate(arr, size);
    print_arr(arr);

    return 0;
}

void print_arr(const char *arr)
{
    printf("Arr: ");
    puts(arr);
}

void rotate(char *arr, const int size)
{
    for (int i = 0; i <= size / 2 ; ++i) {
        int tmp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = tmp;
    }
}
