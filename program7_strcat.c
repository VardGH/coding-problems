//Իրականացնել string.h գրադարանային ֆայլի կողմից տրամադրվող strcat() ֆունկցիային համարժեք ֆունկցիա:

#include <stdio.h>

char *my_strcat(char *st1, const char *st2);

int main()
{
   char str1[] = "This is ";
   char str2[] = "Spartaaa";

   my_strcat(str1, str2);

   puts(str1);
   printf(" %s\n",str2);

   return 0;
}

char* my_strcat(char *st1, const char *st2)
{

    char* tmp = st1;

    while( *st1 != '\0')
    {
        ++st1;
    }

    while( *st2 != '\0')
    {
        *st1++ = *st2++;
    }

    *st1 = '\0';

    return tmp;
}
