#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>


int Chk11Count(int Arr[] , int iLength)
{
    int iCnt =0;
    int iCount =0;
    for (iCnt =0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11){
          iCount ++;
        }
    }
    return iCount;
}

int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iCnt =0;
    int iRet = 0;

    printf("Enter the number of Elements..\n");
    scanf("%d",&iSize);

    ptr =(int *) malloc(sizeof(int ) * iSize);

    if (ptr == NULL)
    {
        printf("Unable to Allocate Memory..\n");
        return -1;
    }

    printf("Enter The elements..\n");
    for (iCnt =0; iCnt < iSize ; iCnt++){
        scanf("%d",&ptr[iCnt]);
        if(ptr[iCnt] < 0)
        {
            ptr[iCnt] = -ptr[iCnt];
        }
    }
    printf("\n");

    iRet = Chk11Count(ptr , iSize);

 printf("Frequency of 11 is : %d\n",iRet);

    free(ptr);

    return 0;
}