#include<stdio.h>

void Display(char cValue)
{
    int Gap = 'a' - 'A';

    if  ( (cValue >= 'a') && (cValue <= 'z') ) 
    {
        printf("%c \n" ,cValue-Gap );
    }

    else if  ( (cValue >= 'A') && (cValue <= 'Z') )  
    {
        printf("%c \n" ,cValue + Gap );
    }
    else
    {
        printf("%c\n",cValue);
    }

}

int main()
{
    char ch = '\0';

    printf("Enter a Charachter\n");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}