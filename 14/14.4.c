#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt ++)
    {
    
        printf("#\t%d\t",iCnt);
        if(iCnt < iNo)
        {
            printf("*\t");
        }

    }
    printf("\n");
}

int main()
{
    int iFrequency =0;
    printf("Enter The Frequency\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0;
}