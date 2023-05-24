#include<stdio.h>

#define ERR_NOTFOUND 0


int LastIndex( char *str , char cValue)
{
    int iCount = 1;
    int res = 0;
    
    while (*str != '\0')
    {

        if ( *str == cValue)
        {
            res = iCount;
        }
            iCount ++;
            str++;  
    }
    if (res == ERR_NOTFOUND)
    {
        return ERR_NOTFOUND;
    }
    else
    {
         return res;
    }
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;
        
    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter Character :\n");
    scanf(" %c",&ch);

    iRet =  LastIndex(Arr , ch);

    if (iRet == ERR_NOTFOUND)
    {
        printf("Charcater Not Found : \n");
    }
    else
    {
        printf("Last Index is  : %d\n",iRet);
    }

    return 0;
}