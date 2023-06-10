#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT ToogleBit (UINT iNo)
{
    UINT iMask = 0XF;
    UINT iResult = 0;

    iResult = iMask | iNo;   //1111

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the Number\n";
    cin>>iValue;

    iRet = ToogleBit(iValue);

    cout<<"Result After toogle first 4 Bits is : "<<iRet<<endl;

    return 0;
}