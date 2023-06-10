#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool chk15Bit (UINT iNo)
{
    UINT iMask = 0X4000;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
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
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter Number\n";
    cin>>iValue;

    bRet = chk15Bit(iValue);

    if(bRet == true)
    {
        cout<<"15 bit is On\n";
    }
    else
    {
        cout<<"15th bit is Off\n";
    }

    return 0;
}