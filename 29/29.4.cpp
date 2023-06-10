#include<iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit( UINT iNo , UINT iPos1 ,UINT iPOs2)
{
    UINT iMask = 0X00000001;     
    UINT iMask1 = iMask << (iPos1 - 1);    
    UINT iMask2 = iMask << (iPOs2 -1);   
    UINT iMask3 = iMask2 & iMask3;
                            
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
    UINT iValue2 = 0;
    UINT iValue3 = 0;
    bool bRet = false;

    cout << "Enter the Number: \n";
    cin >> iValue;

    cout << "Enter the Number 1st Position: \n";
    cin >> iValue2;
    cout << "Enter the 2nd Position: \n";
    cin >> iValue3;

    bRet = CheckBit( iValue , iValue2 , iValue3 );

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