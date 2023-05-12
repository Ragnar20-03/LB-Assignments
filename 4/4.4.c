#include<stdio.h>

typedef int BOOL ;

#define TRUE 1
#define FALSE 0

int Multiply(int iNo1, int iNo2 , int iNo3)
{
    if((iNo1 | iNo2 | iNo3) == 0)
    {
        printf("ENter Valid Number\n");
        return -1;
    }
    int Ans = iNo1 * iNo2 * iNo3;
    return Ans;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;

    int bRet =0;

    printf("Enter a 3 numbers \n");
    scanf("%d",&iValue1);
    scanf("%d",&iValue2);
    scanf("%d",&iValue3);

    bRet=Multiply(iValue1 , iValue2 ,iValue3);
    printf("Multiplication is %d\n",bRet);

    return 0;
}