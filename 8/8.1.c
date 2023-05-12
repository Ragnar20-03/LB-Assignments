#include<stdio.h>

int ChkCount(int iNo)
{   
        int iDigit =0;
        int iCount =0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo /10;
            if((iDigit %2) == 0)
            {
                iCount++;
            }
        }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d ", &iValue);

    iRet = ChkCount(iValue);

    printf("Count of Even Digit is  : %d\n",iRet);

    return 0;
}