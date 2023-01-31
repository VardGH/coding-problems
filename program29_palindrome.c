//Իրականացնել ֆունկցիա, որը ստանում է սիմվոլների զանգված և վերադարձնում է true, եթե տողը (char-երի զանգված) palindrome է,
//իսկ հակառակ դեպքում՝ false: Տողը հակհամարենք polindrome եթե այն, թե՛ աջից ձախ կարդալուց, թե՛ ձախից աջ կարդալուց նույնն է։(Փորձեք լուծել նաև ռեկուրսիվ)

#include <stdio.h>

void is_palindrome(const char *ch);
unsigned int my_strlen(const char arr[]);

int main()
{
    char ch[50];
    printf("Your input : ");
    gets(ch);

    is_palindrome(ch);

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

void  is_palindrome(const char *ch)
{
    int length = my_strlen(ch);
    int palindrome = 0;

    for (int i = 0; i < length / 2; ++i) {
        if (ch[i] == ch[length - i - 1]) {
            palindrome = 1;
        }
        else {
            palindrome = 0;
            break;
        }
    }
    palindrome == 1 ? puts("true") : puts("false");
}

/*void rec_palindrome(const char *ch)
{
    int length = my_strlen(ch);
    static int palindrome = 0;
    static int i = 0;

    if (i <= length / 2) {
        if (ch[i] == ch[length - i - 1]) {
            palindrome = 1;
            ++i;
            rec_palindrome(ch);
        }
        else {
            palindrome = 0;
        }
    }
    palindrome == 1 ? puts("true") : puts("false");
}*/
