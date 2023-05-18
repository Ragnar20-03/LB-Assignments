#include<stdio.h>

float CalculateBill(float fPrice )
{
    float fRes = 0.0f;

    if( fPrice < 500)
    {
        fRes = fPrice;
    }
    else if( fPrice > 500 && fPrice < 1500)
    {
        fRes = fPrice - (fPrice * (10/100)); 
    }
    else {
        fRes = fPrice - ( fPrice * ( 45 / 100));
    }

    return fRes;
}

int main()
{
    float iValue = 0;
    float iRet = 0;

    printf("Enter the Amount..: \n");
    scanf("%f ", &iValue);

    iRet = CalculateBill( iValue);

    printf("Your Total bill is : %f \n" ,iRet);

    return 0;
}