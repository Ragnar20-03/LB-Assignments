#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

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
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    bool bRet = 0;

    cout<<"Enter The Number\n";   
    cin>>iValue1;

    cout <<"Enter the position: \n";
    cin>>iValue2;

    bRet = CheckBit(iValue1 , iValue2);

    if(bRet == true )
    {
        cout<<"true\n";
    }
    else
    {
        cout<<"False\n";
    }

    return 0;
}