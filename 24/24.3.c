#include<stdio.h>

#define ERR_NOTFOUND -1


int Index( char *str , char cValue)
{
    int iCnt = 1;
    while(*str != '\0')
    {
        if (*str == cValue)
        {
            break;
        }
        str ++;
        iCnt ++;
    }
    if (*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
    return iCnt;
    }
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;
        
    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter Charater : \n");
    scanf(" %c",&ch);

    iRet = Index(Arr , ch);

    if (iRet == ERR_NOTFOUND)
    {
        printf("Character Not Found \n");
    }
    else
    {
        printf("Character is Present at %d index \n",iRet);
    }


    return 0;
}