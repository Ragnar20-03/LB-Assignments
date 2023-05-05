//  Difference Between Summation of Factors And Non Factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iFact=0;
    int iNFact=0;
    int iCnt=0;

    if(iNo < 0)
    {
        iNo= -iNo;
    }
    for (iCnt=1; iCnt <iNo; iCnt++ )
    {
        if((iNo % iCnt ) == 0)
        {
            iFact= iCnt + iFact;
        }
        else if((iNo % iCnt) != 0)
        {
            iNFact=iNFact + iCnt;
        }
    }
    return ( iFact - iNFact);
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d is Difference :\n",iRet);

    return 0;
}