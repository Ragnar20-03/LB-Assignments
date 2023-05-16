#include<stdio.h>

void Display(int iRow , int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    int iNo =0;

    for(iCnt =1; iCnt <= iRow ; iCnt++)
    {   
        iNo = iCnt;

        for(jCnt = 0; jCnt < iCol; jCnt++ )
        {
            printf("%d\t",iNo);
            iNo++;
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of Rows And Colums :\n");
    scanf("%d %d", &iValue1 , &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}