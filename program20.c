//Գրեք ծրագիր, որը սիմվոլների զանգվածի մեջից կգտնի ամենաշատ կրկնվող սիմվոլը և կրկնությունների քանակը, որից հետո էկրանին կտպի արդյունքը:

#include <stdio.h>

void max_character(const char *arr);

int main()
{
    char arr[] = "abbakakkadbbsa";

    puts(arr);
    max_character(arr);

    return 0;
}

void max_character(const char *arr)
{
    char max;
    int max_count = 0;

    for (int i = 0; arr[i] != '\0'; ++i) {
        char tmp = arr[i];
        int count = 0;
        for (int j = 0; arr[j] != '\0'; ++j) {
            if (tmp == arr[j]) {
                ++count;
            }
        }
        if (count > max_count) {
            max_count = count;
            max = tmp;
        }
    }

    printf("Character: %c\n", max);
    printf("Count = %d\n", max_count);
}
