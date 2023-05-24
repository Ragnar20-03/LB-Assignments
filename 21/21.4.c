#include<stdio.h>
#include<stdbool.h>

bool chkSymbol(char cValue)
{
    if((cValue >= 33 ) && (cValue <= 64))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter Va;ue :\n");
    scanf("%c",&ch);

    bRet = chkSymbol(ch);

    if (bRet == true)
    {
        printf("It is Special Symbol:\n");

    }
    else
    {
        printf("It is Not a Special Symbol\n");
    }

    return 0;
}