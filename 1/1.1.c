#include<stdio.h>

int Divide ( int iNo1 , int iNo2)
{
    return iNo1 / iNo2;
}

int main()
{
    int  a =  0 ; 
    int  b =  0 ;

    printf("Enter the 2 numbers : \n");
    scanf("%d %d" , &a , &b);

    int iRet  = Divide( a , b );
    printf( " Division is  :  %d \n" , iRet); 

    return 0;
}