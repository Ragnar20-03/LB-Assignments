#include <stdio.h>

void DisplayDigits(char * str)
{

    while (*str != '\0')
    {
        if ((*str >= 47 )&& (*str <= 56 ) )
        {
            printf("%c\t",*str);
        }
        str++;
    }
}


int main()
{
    char Arr[20];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
}