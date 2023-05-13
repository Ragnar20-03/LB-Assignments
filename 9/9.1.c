#include<stdio.h>
#include<stdlib.h>

//             (int *Arr , int iLength)
int Difference(int Arr[] , int iLength)
{   
    int iCnt =0;
    int iSumEven = 0;
    int iSumOdd = 0;
    
    for (iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2 ) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else{
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    return (iSumEven - iSumOdd);
}

int main()
{
    int iSize =0 ;
    int *ptr = NULL;
    int iCnt =0 ;
    int iRet = 0;

    printf("Enter the Number of Elements..\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Not Allocated");
        return -1;
    }

    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements Are : \n");
    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , ptr[iCnt]);
    }

    iRet = Difference (ptr , iSize);

    printf("The Difference is  : %d\n",iRet);

    free(ptr);

    if(ptr == NULL)
    {
        printf("Memory Deleted Susccesfully");
    }

    return 0;

}