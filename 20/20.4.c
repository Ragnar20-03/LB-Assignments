#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL CheckSmall(char cValue)
{
    if((cValue >= ( 'a')) && (cValue <=  'z') ) 
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

    bRet = CheckSmall(ch);

    if(bRet == TRUE)
    {
        printf("It is A Small Case\n");
    }
    else
    {
        printf("It is not  A Small Case\n");

    }

    return 0;
}