#include <stdio.h>

void DisplayDigit(int *ptr)
{
    int iDigit=0;

    while(*ptr != 0)
    {
        iDigit = *ptr % 10;
        printf("%d\n",iDigit);
        *ptr = *ptr / 10;
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayDigit(&iValue);

    return 0;
}