//Իրականացնել string.h գրադարանային ֆայլի կողմից տրամադրվող strlen() ֆունկցիային համարժեք ֆունկցիա:

#include <stdio.h>

unsigned int my_strlen(const char arr[]);

int main()
{
    //char ch[50] = "HakunaMatat";
    char s1[] = "Picsart Academy";
    printf("Length of %s = %d\n",s1, my_strlen(s1));
    return 0;
}

unsigned int my_strlen(const char arr[])
{
    int count = 0;
    while(arr[count] != '\0') {
        ++count;
    }
    return count;
}
