#include<stdio.h>


void DisplayMultiple(int iNo)
{
    int iCnt=0;
    int Mul =0;
    for (iCnt = iNo ; Mul < 5 ; iCnt++)
    {
        if((iCnt % iNo) == 0 )
        {
            Mul++;
            printf("%d\n",iCnt);
        }
    }
}

int main ()
{
    int iValue=0;
    printf("Enter a Number\n");
    scanf("%d",&iValue);

    DisplayMultiple(iValue);

    return 0;
}