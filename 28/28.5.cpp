#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0X00000009;   
    
    return (iMask ^ iNo);
    
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the number : \n";
    cin >> iValue;

    iRet = ToggleNibble(iValue);

    cout<<"Resulr after Toggle is : " <<iRet;

    return 0;
}