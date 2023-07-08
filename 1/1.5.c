#include<stdio.h>

void Accept ( int iNo)
{

    while ( iNo >= 0 )
    {
        iNo --;
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