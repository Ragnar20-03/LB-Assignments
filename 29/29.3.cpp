#include<iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit( UINT iNo)
{
    UINT iMask = 0X900;     
    UINT iMask1 = 0X900;     
    UINT iMask2 = 0X800;     
    UINT iMask3 = 0X100;     
                            
    UINT iResult = 0;   

    iResult = iMask & iNo;   

    if( (iResult == iMask1 ) || (iResult == iMask2 ) || (iResult == iMask3) )
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

    cout << "Enter the Number: \n";
    cin >> iValue;

    bRet = CheckBit( iValue );

    if(bRet == true )
    {
        cout<<"true \n";
    }
    else
    {
        cout<<"False \n";
    }

    return 0;
}