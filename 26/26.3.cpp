#include<iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit (UINT iNo)
{
    UINT iMask = 0X8104040;
    UINT iResult = 0;

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return true ;
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

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"Bits Are on \n";
    }
    else
    {
        cout<<"BITs Are off \n";
    }

    return 0;
}