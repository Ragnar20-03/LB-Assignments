#include<stdio.h>
#include<stdbool.h>

bool ChkEvenOdd ( int iNo)
{
if ( iNo % 2 == 0 )
{
    return true;
}
else
{
    return false;
}
}



int main()
{

int iNo = 0 ;
printf("Enter Number : \n");
scanf("%d" , &iNo);

bool bRet = ChkEvenOdd ( iNo);

if ( bRet == true)
{
    printf(" It is Even : \n");
}
else
{
    printf(" It is Odd : \n");

}
}