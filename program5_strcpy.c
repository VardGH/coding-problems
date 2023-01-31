//Իրականացնել string.h գրադարանային ֆայլի կողմից տրամադրվող strcpy() ֆունկցիային համարժեք ֆունկցիա։

#include <stdio.h>

char* my_strcpy(char *st1, const char *st2);
unsigned int my_strlen(const char *st);
int main()
{
    char ch1[20] = "helloo";
    char ch2[20] = "world";
    printf("%s\n", my_strcpy(ch1, ch2));
    return 0;
}

unsigned int my_strlen(const char *st)
{
    int count = 0;
    while (*st++ != '\0') {
        ++count;
    }
    return count;
}

char* my_strcpy(char *st1, const char *st2)
{
    char *tmp = st1;
    if (my_strlen(st1) >= my_strlen(st2)) {
        while (*st1 != '\0') {
           *st1 = *st2;
           ++st1;
           ++st2;
        }
    }
    return tmp;
}
