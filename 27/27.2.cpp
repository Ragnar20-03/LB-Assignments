#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT offBit(UINT iNo){
    UINT iMask = 0X240;
    UINT iResult = 0;

    iResult = iMask & iNo;
    if (iResult == iMask)
    {
        return (iMask ^ iNo);
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter Number \n";
    cin>> iValue;

    iRet = offBit(iValue);

    cout<<"Result is : "<<iRet<<endl;

    return 0;
}