//Գրեք ծրագիր, որը կպարզի ձեր համակարգչի բայթերի դասավորման կարգը (byte order):

#include <stdio.h>

int main()
{
    int x = 1;
    int *ptr = &x;
    char *ch = (char*)ptr;

    if (*ch != 0) {
        puts("Big-endian");
    }
    else {
        puts("Little-endian");
    }

    return 0;
}
