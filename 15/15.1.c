#include<stdio.h>


void Display(int iRow , int iValue2)
{
    int iCnt = 0;
    int jCnt =0;

    for(iCnt = 1 ; iCnt <= iRow; iCnt ++ )
    {
        for (jCnt = 1; jCnt <=iValue2 ; jCnt ++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of Rows..\n");
    scanf("%d",&iValue1);
    printf("Enter the Number of Columns..\n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}