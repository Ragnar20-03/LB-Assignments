#include <iostream>

using namespace std;

typedef unsigned int UINT ; 

UINT ToggleBit( UINT iNo , UINT iPos )
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    return (iMask ^ iNo );
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    UINT iRet = 0;

    cout<<"Enter The Number : \n";
    cin>>iValue1;

    cout<<"Enter The Positiojn to Toggle the bit : \n";
    cin>>iValue2;

    iRet = ToggleBit( iValue1 , iValue2 );

    cout<<"Result After toggle is : \n"<< iRet;

    return 0;
}