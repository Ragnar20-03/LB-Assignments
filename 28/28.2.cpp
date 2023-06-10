#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT offBit( UINT iNo , UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iMask & iNo;
    if(iResult == iMask){
        return (iMask ^ iNo);
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    UINT iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue1;

    cout<<"Enter the Position :\n";
    cin >> iValue2;

    iRet = offBit( iValue1 , iValue2);

    cout<<"The Result is : "<<iRet;

    return 0;
}