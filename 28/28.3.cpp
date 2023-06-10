#include<iostream>

using namespace std;

typedef unsigned int UINT ; 

UINT offBit ( UINT iNo , UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iMask & iNo;

    if (iResult == iMask)
    {
        return iNo;
    }
    else
    {
        return (iNo | iMask) ;
    }
}


int main ()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    UINT iRet = 0;

    cout<<"Enter Number : \n";
    cin>> iValue1;

    cout<<"Enter Position to On the bit : \n";
    cin>>iValue2;

    iRet = offBit( iValue1 , iValue2 );

    cout<<"Result is : "<<iRet;

    return 0;
}