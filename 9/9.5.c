#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[], int iLength)
{
    int iCnt =0;
    for (iCnt =0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 11 ) == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize =0;
    int iCnt =0;
    int *ptr  = NULL;

    printf("Enter The Number of Elements..\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc (iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to allocate Memory..\n");
        return -1;
    }
    printf("Enter the numbers .. \n");
    for (iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Elements are .. \n");
    for (iCnt =0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
printf("\n\n");
    Display(ptr , iSize);

    free(ptr);
    return 0;
}