#include <stdio.h>

int Factorial( float iNo)
{
    int iCnt =0;
    float Ans =1;
    for (iCnt =1 ; iCnt <=(int)iNo ; iCnt++)
    {
        Ans = Ans * iCnt;   
    }
    return (int)Ans;
}
int main()
{
    int iValue=0;
    int iRet =0;

    printf("Enter A number .. :\n");
    scanf("%d",&iValue);

    iRet =Factorial((float)iValue);

    printf("Factorial is %f",(float)iRet);

    return 0;
}