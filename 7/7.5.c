#include<stdio.h>

int ChkCount(int iNo)
{   
        int iDigit =0;
        int iCount =0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo /10;
            if(iDigit < 6)
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

    printf("Count of less than 6 is : %d\n",iRet);

    return 0;
}