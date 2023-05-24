#include<stdio.h>

void Display(char  cValue)
{
    if(( cValue >= 'a') && ( cValue <= 'z') )
    {
        while (cValue <= 'z')
        {
            printf("%c\n",cValue);
            cValue++;
        }
    }

    else if(( cValue >= 'A') && ( cValue <= 'Z') )
    {
        while (cValue <= 'Z')
        {
            printf("%c\t",cValue);
            cValue++;
        }
    }
    else
    {
        printf("%c\n",cValue);
    }

}

int main()
{
    char ch = '\0';

    printf("Enter te Charcter :\n");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}