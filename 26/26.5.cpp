#include<iostream>

using namespace std;

typedef unsigned int UINT ;

// Check First and LAst bit

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001;
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

    cout<<"Enter the Number\n";
    cin>>iValue;

    bRet =CheckBit(iValue);

    if(bRet == true )
    {
        cout<<"Bits are On \n";
    }
    else
    {
        cout<<"Bits are Off\n";
    }

    return 0;
}