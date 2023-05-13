#include <stdio.h>
#include<stdlib.h>


int ChkFrequency(int Arr[] , int iLength, int iValue){

    int iCnt =0;
    int iCount =0;
    for (iCnt =0; iCnt < iLength; iCnt ++)
    {
        if (Arr[iCnt] == iValue)
        {
            iCount ++;
        }
    }
    return iCount;
}

int main()
{
    int iSize =0;
   unsigned int * ptr = NULL;
    int iCnt =0;
    int iNo =0;
    int iRet = 0;

    printf("Enter the Number of elements .. \n");
    scanf("%d",&iSize);

    ptr = (int *) malloc( sizeof(int)  * iSize);

    if(ptr == NULL)
    {
        printf("Unalble to Alloavate Memory..\n");
        return -1;
    }

    printf("Enter the Elemets..\n");
    for (iCnt =0; iCnt < iSize; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
        if(ptr[iCnt] < 0) {
            ptr[iCnt] = -ptr[iCnt];
        }
    }
    printf("Enter the number to count Frequency..\n");
    scanf("%d",&iNo);

    printf("\n");

    iRet = ChkFrequency(ptr , iSize , iNo);

    printf("Frequency of %d is : %d" , iNo , iRet);


    return 0;
}