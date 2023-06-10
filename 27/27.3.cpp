#include <iostream>

using namespace std;

typedef unsigned int UINT;

UINT CheckBit(UINT iNo)
{
    UINT iMask = 0X40;

    return (iMask ^ iNo);

}

int main()
{
    UINT iRet = 0;
    UINT iValue = 0;

    cout<<"Enter thr NUmber \n";
    cin >>iValue;

    iRet = CheckBit(iValue);

    cout<<"Result afrter toggle is : "<<iRet <<endl;

    return 0;
}
