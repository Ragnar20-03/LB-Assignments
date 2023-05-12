#include<stdio.h>

    typedef int BOOL ;

    #define TRUE 1
    #define FALSE 0

    BOOL ChkZero(int *ptr)
    {
        int iDigit =0;
        while (*ptr != 0)
        {
            iDigit = *ptr % 10;
            *ptr = *ptr / 10;
            if(iDigit == 0)
            {
                break;
            }
        }
        if(iDigit == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }

    }

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter A Number :\n");
    scanf("%d",&iValue);

    bRet =ChkZero(&iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("It Does Not Contains Zero");
    }

    return 0;
}