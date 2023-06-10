#include <iostream>

// check 15 8 bit on or off 

using namespace std;

typedef unsigned int UINT;


bool CheckBit (UINT iNo){

    UINT iMask = 0X20010;

    UINT iResult = 0;

    iResult = iMask & iNo;

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
    cin >> iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"Bits are On \n";
    }
    else
    {
        cout<<"Bits are Off\n";
    }

    return 0;
}