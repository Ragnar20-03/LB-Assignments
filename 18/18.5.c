#include<stdio.h>


void Display(int iRow , int iCol)
{
    int iCnt =0;
    int jCnt =0;
    for(iCnt =1; iCnt <= iRow ; iCnt++)
    {
        for (jCnt = 1; jCnt <= iCol ; jCnt++)
        {
            if((iCnt== 1) || (iCnt == iRow) || (jCnt == 1) || (jCnt == iCol))
            {
                printf("%d\t",jCnt);
            }
            else{
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the nu,ber of rows and colums..\n");
    scanf("%d%d",&iValue1, &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}