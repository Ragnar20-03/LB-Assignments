#include<stdio.h>
/////////////
void Display(int iRow , int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    char Arr[] = {'#' , '*'};
    for (iCnt =0; iCnt < iRow ; iCnt++)
    {
        for (jCnt = 0; jCnt< iCol; jCnt++)
        {
            printf("%c\t",Arr[(jCnt % 2)]);
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of Rows :\n");
    scanf("%d",&iValue1);
    printf("Enter the Number of Rows :\n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}