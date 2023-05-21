#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL CheckDigit(char cValue)
{
    if((cValue >= ( 'A')) && (cValue <=  'Z') ) 
    {
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int main()
{
    char ch = '\0';
    BOOL bRet = FALSE; 

    printf("Enter a Charater\n");
    scanf("%c",&ch);

    bRet = CheckDigit(ch);

    if(bRet == TRUE)
    {
        printf("It is A Capital character..\n");
    }
    else
    {
        printf("It is not  A Capital character..\n");

    }

    return 0;
}