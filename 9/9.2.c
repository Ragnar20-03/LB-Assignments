#include <stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength)
{
    int iCnt = 0;
    for (iCnt =0;iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5  ) ==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }

}



int main()
{
    int iSize =0;
    int *ptr = NULL;
    int iCnt =0;

    printf("Enter the Number of elements ..\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);
    if (ptr == NULL)
    {
        printf("Unalbe to Alloacte Memory .. \n");
        return -1;
    }

    printf("enter the elemrnts .. \n");
    for (iCnt =0; iCnt < iSize; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements Are ..\n");
    for (iCnt =0 ; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    Display(ptr , iSize);

    free(ptr);

    if(ptr == NULL)
    {
        printf("Succesfully Deallocated Memory..\n");
    }

    return 0;

}