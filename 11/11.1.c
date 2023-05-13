#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool ChkFrequency(int Arr[] , int iLength, int iValue){

    int iCnt =0;
    bool bResult = false;
    for (iCnt =0; iCnt < iLength; iCnt ++)
    {
        if (Arr[iCnt] == iValue)
        {   
            bResult = true;
            break;
        }
    }
    return bResult;
}

int main()
{
    int iSize =0;
    int * ptr = NULL;
    int iCnt =0;
    int iNo =0;
    bool bRet = false;

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

    bRet = ChkFrequency(ptr , iSize , iNo);

    if (bRet == true)
    {
        printf("the %d is Present in Numbers .. \n", iNo);

    }

    else
    {

        printf("the %d is Not Present in Numbers .. \n", iNo);

    }
    free(ptr);


    return 0;
}