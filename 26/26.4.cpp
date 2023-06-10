#include<iostream>

using namespace std;
//  7 8 9

typedef unsigned int UINT;

bool CheckBit (UINT iNo)
{
    UINT iMask = 0X1C0;
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
        cout<<"7 8 9 Bits Are on \n";
    }
    else
    {
        cout<<"7 8 9 BITs Are off \n";
    }

    return 0;
}