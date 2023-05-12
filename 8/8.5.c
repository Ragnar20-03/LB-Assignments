#include <stdio.h>

int CountDiff(int *ptr)
{
    int iDigit = 0;
    int iSumOdd =0;
    int iSumEven =0;
  unsigned  int iResult =0;
    while (*ptr != 0)
    {
        iDigit = *ptr % 10;
        *ptr = *ptr / 10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else{
            iSumOdd = iSumOdd + iDigit;
        }
    } 
        iResult = iSumEven - iSumOdd;

        return iResult;
}

int main()
{
    int iValue =0;
    unsigned int iRet =0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(&iValue);

    printf("The Difference is : %d" , iRet);

    return 0;
}