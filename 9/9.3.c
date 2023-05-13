#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength)
{
    int iCnt =0;
    for (iCnt =0 ; iCnt < iLength; iCnt++)
    {
        if (((Arr[iCnt]% 2 )== 0)  && ((Arr[iCnt] % 5) == 0))
        {
            printf("%d",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int * ptr =0;
    int iCnt =0;

    printf("enter the Number of elements..\n ");
    scanf("%d",&iSize);

    ptr = (int *) malloc (iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to ALlocate memory XX\n");
        return -1;
    }
    
    printf("ENter The Numbers\n");
    for (iCnt =0; iCnt < iSize ;  iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements Are..\n");
    for (iCnt =0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    printf("\n");

    Display(ptr , iSize);

    free (ptr);



    return 0;
}