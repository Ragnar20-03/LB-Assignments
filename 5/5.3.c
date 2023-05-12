#include <stdio.h>


////////////////////////////////
// Not Solved Yet..
//  Number Line
//////////////////////////////


void NumberLine(int iNo)
{
    iNo = -iNo;
for(int i=0; iNo<= (-iNo); i++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    NumberLine(iValue);

    return 0;
}