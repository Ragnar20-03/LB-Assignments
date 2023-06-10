#include<iostream>

using namespace std;

typedef unsigned int UINT ; 

UINT CountOne( UINT iNo )
{
    UINT iCount = 0;
    UINT iDigit = 0;

    while (iNo != 0 )
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCount ++;
        }
        iNo = iNo / 2;
    }

    return iCount;
}

int main() 
{
    UINT iValue1 = 0;
    UINT iRet = 0;

    cout<<"Enter the Number : \n";
    cin>> iValue;

    iRet = CountOne(iValue);

    cout<<"Count of one is : \n"<<iRet;

    return 0;
}