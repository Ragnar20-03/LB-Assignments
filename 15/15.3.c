#include<stdio.h>


void Display(int iRow , int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for(iCnt = 1 ; iCnt <= iRow ; iCnt++)
    {
        for (jCnt = iCol; jCnt > 0 ; jCnt --)
        {
            printf("%d\t",jCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows And Columns : \n");
    scanf("%d %d", &iValue1 , &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}