#include<stdio.h>

int ChkCount(int iNo)
{   
        int iDigit =0;
        int iCount =0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo /10;
            if(iDigit > 3 && iDigit < 7)
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

    printf("Count betwwen 3 & 7 Digit is  : %d\n",iRet);

    return 0;
}