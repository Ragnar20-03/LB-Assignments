#include<stdio.h>
#include<stdlib.h>


int EvenNumbers(int Arr[] , int iLength)
{
    int iCnt =0;
    int iCountEven =0;
    int iCountOdd =0;
    for (iCnt =0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 ==0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return (iCountEven - iCountOdd);
}

int main()
{
    int iSize =0;
    int *ptr = NULL;
    int iCnt =0;
    int iRet=0; 

    printf("Enter the number of elements..\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc ( iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }

    printf("Enter The Numbes..\n");
    for (iCnt =0 ;iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
        if(ptr[iCnt] < 0)
        {
            ptr[iCnt] = -ptr[iCnt];
        }
    }
    
    printf("\n");

    iRet= EvenNumbers(ptr,iSize);

    printf("Frequency of Even Numbers is : %d",iRet);

    free(ptr);


    return 0;
}