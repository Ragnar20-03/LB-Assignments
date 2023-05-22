#include<stdio.h>


int CountVovel(char str[])
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(( *str == 'a') || ( *str == 'e') || ( *str == 'i') ||( *str == 'o') ||( *str == 'u') ||( *str == 'A') ||( *str == 'E') ||( *str == 'I') ||( *str == 'O') ||( *str == 'U'))
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

    printf("Enter A string : \n");
    scanf(" %[^'\n']s" , &Arr);

    iRet = CountVovel(Arr);

    printf("Number of Vovels Are : %d" , iRet);

    return 0;
}