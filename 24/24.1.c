#include<stdio.h>
#include<stdbool.h>


bool chkChar( char *str , char cValue)
{
    bool bFlag = false;
    while (*str != '\0')
    {
        if (*str == cValue)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}


int main()
{
    char Arr[20];
    bool bRet = false;
    char ch = '\0';

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    printf("enter Character to Serarch : \n");
    scanf(" %c",&ch);
    
    bRet = chkChar(Arr , ch);

    if (bRet == true)
    {
        printf("Character is Present in a String \n");
    }
    else
    {
        printf("Not Present in A String:");
    }

    return 0;
}