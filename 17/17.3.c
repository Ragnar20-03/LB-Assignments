#include<stdio.h>

void Display(int iRow , int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    char ch = 'a';
    int iNo = 0;

    for(iCnt =0; iCnt< iRow ; iCnt++)
    {
        ch = 'a';
        iNo = 0;
        for(jCnt = 0; jCnt < iCol; jCnt++ )
        {
            if( iCnt % 2 == 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                    iNo++;
                printf("%d\t",iNo);
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