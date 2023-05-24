#include<stdio.h>

#define ERR_NOTFOUND 0

int Frequency (char *str , char cValue)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == cValue)
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character :\n");
    scanf(" %c",&ch);

    iRet = Frequency(Arr , ch);

    if(iRet != ERR_NOTFOUND)
    {
    printf("Frequency of Given Charcter is : %d",iRet);
    }
    else
    {
        printf("Charcter is Not Fount : \n");
    }
    return 0;
}