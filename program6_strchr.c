//Իրականացնել string.h գրադարանային ֆայլի կողմից տրամադրվող strchr() ֆունկցիային համարժեք ֆունկցիա:

#include <stdio.h>

char* my_strchr(const char *str, const char ch);

int main()
{
   const char str[] = "Hello World";
   const char ch = 'W';
   char *ret;

   ret = my_strchr(str, ch);

   printf("%s\n", ret);

   return 0;
}

char* my_strchr(const char *str, const char ch)
{
    /*for (; *str !='\0'; ++str) {
        if (*str == ch) {
            return str;
            break;
        }
    }*/

    while (*str++ != '\0') {
        if (*str == ch) {
            return str;
        }
    }
    return NULL;
}
