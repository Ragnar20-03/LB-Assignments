#include<stdio.h>
#include<ctype.h>

void Display(int iRow , int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    int iEven = 0;
    int iOdd = 1;

    for (iCnt = iRow ; iCnt > 0 ; iCnt--)
    {   
        iOdd = 1;
        iEven = 0;
    
        for (jCnt =1; jCnt<= iCol ; jCnt++)
        {   
            if(iCnt % 2 == 0)
            {   iEven += 2;
                printf("%d\t",iEven);
            }
            else
            {
                printf("%d\t",iOdd);
                iOdd += 2;
            }
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