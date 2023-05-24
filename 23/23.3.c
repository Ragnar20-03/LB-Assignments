#include<stdio.h>


void strtoggleX(char * str)
{

    while (*str != '\0')
    {
        if( ( *str <= 'z') && (*str >= 'a'))
        {
            *str = *str - 32;
        }

        else if( ( *str <= 'Z') && ( *str >= 'A'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("String After toggle is %s\n",Arr);

    return 0;
}