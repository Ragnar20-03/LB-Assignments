#include<stdio.h>


void DisplayASCII()
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < 256 ; iCnt++)
    {
        printf("%p \t %o\n",iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}