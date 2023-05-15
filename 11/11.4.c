#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[] , int iLength ,int iStart ,int  iEnd){

        int iCnt =0;
        for (iCnt =0;iCnt < iLength ; iCnt ++)
        {
            if(Arr[iCnt] <= iEnd && Arr[iCnt] >=iStart)
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
    int iStart=0;
    int iEnd=0;


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
    printf("Enter the Range ..\n");
    scanf("%d",&iStart);
    scanf("%d",&iEnd);
    printf("\n\n");
    Range(ptr , iSize , iStart , iEnd);

    free(ptr);
    
    return 0;
}