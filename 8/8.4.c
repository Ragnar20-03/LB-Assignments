#include<stdio.h>

int Multiply(int iNo)
{   
        int iDigit =0;
        int iMul =1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo /10;

            iMul = iMul * iDigit;
        }
        return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d ", &iValue);

    iRet = Multiply(iValue);

    printf("Multipliation of ALl digit is  %d\n",iRet);

    return 0;
}