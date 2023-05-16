
#include<stdio.h>
#include<stdlib.h>


void Digits(int Arr[] , int iLength){
    int iCnt =0;

    for (iCnt =0; iCnt<iLength ; iCnt ++)
    {
      int iDigit =0;
      int iCount=0;

        int iNo=Arr[iCnt];
        while(iNo > 0)
        {
        iCount=0;
        iDigit = Arr[iCnt]%10;
        iNo = Arr[iCnt] /10;
        iCount++;
        }
        if(iCount == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
    
}

int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iCnt =0;


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
    Digits(ptr , iSize);

    free(ptr);
    
    return 0;
}