#include<stdio.h>

void Display ( int iNo , int iNo2)
{
while ( iNo2 > 0 )
{
    iNo2 --;
    printf(" %d : " , iNo);
}
}



int main()
{

int iNo = 0 ;
int iNo2 = 0 ;
printf("Enter Number :and Times  \n");
scanf ( "%d %d " , &iNo , &iNo2);

    Display ( iNo);

    return 0 ;
}