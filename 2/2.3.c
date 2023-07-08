#include<stdio.h>

void Display ( int iNo)
{
if ( iNo < 10)
{
    printf ( " Hello \n");
}
else
{
    printf ( "Demo \n");

}
}



int main()
{

int iNo = 0 ;
printf("Enter Number : \n");
scanf ( "%d" , &iNo);

    Display ( iNo);

    return 0 ;
}