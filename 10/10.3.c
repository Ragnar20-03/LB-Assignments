#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


bool Chk11(int Arr[] , int iLength)
{
    int iCnt =0;
    bool bResult = false;
    for (iCnt =0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11){
            bResult =  true;
            break;
        }
    }
    return bResult;
}

int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iCnt =0;
    bool bRet = false;

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

    bRet = Chk11(ptr , iSize);

    if(bRet == false) {
        printf("Numbers does not contains 11..\n");
    }   
    else
    {

        printf("Numbers  contains 11..\n");
    }

    free(ptr);

    return 0;
}