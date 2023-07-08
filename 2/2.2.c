#include<stdio.h>

void Accept ( int iNo)
{

   for ( int iCnt = 0  ; iCnt < iNo ; iCnt++)
    {
        printf(" * ");
    }
}



int main()
{

int iNo = 0 ;
printf("Enter Number : \n");
scanf ( "%d" , &iNo);

    Accept ( iNo);

    return 0 ;
}