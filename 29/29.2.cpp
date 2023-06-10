#include<iostream>

using namespace std;

typedef unsigned int UINT ; 

UINT CountOne( UINT iNo1 , UINT iNo2 )
{
    UINT iCount1 = 0;
    UINT iCount2 = 0;
    UINT iDigit1 = 0;
    UINT iDigit2 = 0;

    while ((iNo1 != 0 ) && (iNo2 != 0))
    {
        iDigit1 = iNo1 % 2;
        iDigit2 = iNo2 % 2;
        if(iDigit1 == 1 || iDigit2 == 1)
        {
            iCount1 ++;
            iCount2 ++;
        }
        iNo1 = iNo1 / 2;
        iNo2 = iNo2 / 2;
    }

    cout<<"Count of 1 from 1st Number is : "<<iCount1<<'\n';
    cout<<"Count of 1 from 2nd Number is : "<<iCount2<<'\n';
    
}

int main() 
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    cout<<"Enter the First Number : \n";
    cin>> iValue1;

    cout<<"Enter the Second Number : \n";
    cin>> iValue2;
    
     CountOne(iValue1, iValue2);

    return 0;
}