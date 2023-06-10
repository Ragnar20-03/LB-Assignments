// # Incomplete


#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT ToogleRange( UINT iNo , UINT iStart , UINT iEnd)
{
    UINT iMask = 0X00000001;
    UINT iMask1 = iMask << (iStart - 1);
    UINT iMask2 = iMask << (iEnd - 1);
    iMask = iMask1 ^ iMask2;  //Range Mask
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue3 = 0;
    UINT iValue2 = 0;
    UINT iRet  = 0;

    iRet = ToogleRange( iValue , iValue2 , iValue3);

    cout<<"Value After Toggle is : \n"<<iRet;

    return 0;
}