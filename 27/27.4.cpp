#include <iostream >

using namespace std;

typedef unsigned int UINT;

UINT ToogleBit(UINT iNo)
{
    UINT iMask = 0X240;
     return iMask ^ iNo;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the Number \n";
    cin>>iValue;

    iRet = ToogleBit(iValue);

    cout<<"Result after toggle 7 and 10 th bits is : "<<iRet<<endl;

    return 0;
}