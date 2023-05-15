#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int chkLastOccur(int Arr[] , int iLength, int iValue){

    int iCnt =0;
    int  iResult = -1 ;
    for (iCnt = iLength -1; iCnt >=0 ; iCnt--)
    {
        if (Arr[iCnt] == iValue)
        {   
            iResult = iCnt;
            break;
        }
    }
    return iResult;
}

int main()
{
    int iSize =0;
    int * ptr = NULL;
    int iCnt =0;
    int iNo =0;
    int  iRet = 0;;

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

    iRet = chkLastOccur(ptr , iSize , iNo);

    printf("Last Occurence of element is at %d\n",iRet);
    free(ptr);


    return 0;
}