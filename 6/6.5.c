#include<stdio.h>

void Table(int iNo)
{
    for (int iCnt=10; iCnt>=1; iCnt--)
    {   
        printf("%d\n",iNo * iCnt);
    }
}

int main()
{
    int iValue =0;

    printf("Enter A Number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}