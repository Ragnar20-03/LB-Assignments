#include <stdio.h>

float Percantage(int iNo1,int iNo2)
{
   return (((float)iNo2 * 100) / (float)iNo1); 
}

int main()
{
    int iValue1 =0;
    int iValue2= 0;
    float fRet = 0.0f;

    printf("Enter the Total marks\n");
    scanf("%d",&iValue1);
    printf("Enter the Obtain marks\n");
    scanf("%d",&iValue2);

    fRet= Percantage(iValue1 , iValue2);

    printf("Percantages are .. : %f\n" , fRet);

    return 0;
}