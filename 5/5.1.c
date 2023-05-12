#include<stdio.h>

void pattern(int iNo)
{
    for (int iCnt =1; iCnt<= iNo; iCnt++ )
    {
        printf("$\t");
        printf("*\t");
    }
}

int main ()
{
    int iValue =0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}