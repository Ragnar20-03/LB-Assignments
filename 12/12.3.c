#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[] , int iLength ){

        int iCnt =0;
        int iSmall=Arr[0];
        int iLarge=Arr[1];
        int iResult =0;
        for (iCnt =0;iCnt < iLength ; iCnt++)
        {
            if(iLarge > Arr[iCnt])
            {
                iLarge = Arr[iCnt];
            }
            if(iSmall < Arr[iCnt])
            {
                iSmall = Arr[iCnt];
            }
            
            
        }
        iResult =iLarge - iSmall;
        if((iResult) < 0)
        {
            iResult = -iResult;
        }
        return (iResult);
} 

int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iCnt =0;
    int iRet =0;



    printf("Enter Number of Elements..\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to Allocate Memoty..\n");
        return -1;

    }

    printf("Enter the number of elements..\n");
    for (iCnt =0; iCnt < iSize ; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("ELements are .. \n");

    for (iCnt =0; iCnt < iSize ; iCnt ++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    printf("\n\n");
    iRet= Difference(ptr , iSize );
    printf("Difference is Number is %d\n",iRet);

    free(ptr);
    
    return 0;
}