#include<stdio.h>


void Display( int iRow , int iCol)
{

    int i = 0;
    int j = 0;

    for (i = iRow; i >= 1; i--)
    {
        for ( j = 1; j <= iCol ; j++ )
        {
            if (( i == j) || (i == iRow) || (i == 1) || (j == 1) || (j == iCol) )
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }

        }
        printf("\n");
    }
} 


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Coloumsns and Rows\n");
    scanf("%d%d",&iValue1, &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}