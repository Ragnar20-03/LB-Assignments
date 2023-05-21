#include<stdio.h>


int CheckSmall(char str[])
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'a')  && (*str <= 'z') )
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

    iRet = CheckSmall(Arr);

    printf("Number of Small letters are : %d\n", iRet);

    return 0;
}