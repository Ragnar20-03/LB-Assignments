// MultiPlication Of Factors

#include <stdio.h>

typedef unsigned long int ULINT;

ULINT FactorM(int iNo)
{
    ULINT iResult=1;
    int iCnt=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt=1; iCnt<= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iResult = iResult * iCnt;
            
        }
    }
    return iResult;

}

int main()
{
    int iValue=0;
    ULINT iRet=0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iRet=FactorM(iValue);

    printf("%d is The Multiplication if factors of %d\n",iRet,iValue);

    return 0;
}