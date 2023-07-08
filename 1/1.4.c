#include<stdio.h>
#include<stdbool.h>

bool ChkDivisible( int iNo)
{
    if ( iNo % 5 == 0 )
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
scanf ( "%d" , &iNo);

bool bRet = ChkDivisible(iNo);
if ( bRet == true )
{
    printf("Yes \n");
}
else
{
    printf("No \n");

}
    return 0;
}