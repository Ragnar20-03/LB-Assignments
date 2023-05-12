#include <stdio.h>

void Number(int iNo)
{
    int iCnt=1;
    while (iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{   
    int iValue=0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Number(iValue);    

    return 0;
}