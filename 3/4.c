// Summation of ALL Non Factors Of the Numbers..

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt=0;
    int iResult=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iResult= iResult + iCnt;
        }
    }
    return iResult;
}

int main()
{
    int iValue=0;
    unsigned int iRet=0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf(" Summation is :%d\n",iRet);

    return 0;
}