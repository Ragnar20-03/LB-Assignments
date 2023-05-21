#include<stdio.h>


int CheckCapital(char str[])
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'A')  && (*str <= 'Z') )
        {
            iCount ++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a String ..:\n");
    scanf(" %[^'\n']s" , Arr);

    iRet = CheckCapital(Arr);

    printf("Number of Capital letters are : %d\n", iRet);

    return 0;
}