#include<stdio.h>
#include<ctype.h>

void Display(int iRow , int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    char ch = '\0';

    for (iCnt = 1 ; iCnt <= iRow ; iCnt++)
    {   
        ch = 'A';

        for (jCnt =1; jCnt<= iCol ; jCnt++)
        {   if(iCnt % 2 !=0)
        {
            printf("%c\t",ch);
        }
        else{
            printf("%c\t",tolower(ch));
        }
            ch++;
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