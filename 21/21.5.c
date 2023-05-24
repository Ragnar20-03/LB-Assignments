#include<stdio.h>


void Display(char cValue)
{
    printf("Decimal : %d\n",cValue);
    printf("Hexa Decimal : %p\n",cValue);
    printf("Octal : %o\n",cValue);
}

int main()
{
    char ch = '\0';

    printf("Enter Character :\n");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}