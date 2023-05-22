#include<stdio.h>


int Diff(char str[])
{
    int iCapital = 0;
    int iSmall = 0;
    while(*str != '\0')
    {
        if((*str >= 'a')  && (*str <= 'z') )
        {
            iSmall ++;
        }
        if((*str >= 'A')  && (*str <= 'Z') )
        {
            iCapital ++;
        }
        str++;
    }
    return (iSmall - iCapital);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a String ..:\n");
    scanf(" %[^'\n']s" , Arr);

    iRet = Diff(Arr);

    if(iRet < 0)
    {
        iRet = -iRet;
    }

    printf("Difference is : %d\n", iRet);

    return 0;
}