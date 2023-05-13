#include <stdio.h>
#include<stdlib.h>

void Display( int Arr[], int iLength)
{
    int iCnt =0;
    for (iCnt =0 ; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5 ) == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize =0;
    int iCnt =0;
    int *p =NULL ;

    printf("Enter the of Elements... \n");
    scanf("%d" , &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL);
    {
        printf("Unable to Allocate Memory");
        return -1;
    }
    
    printf("Enter The Elements\n");
    for (iCnt =0; iCnt < iSize; iCnt ++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Elements are : \n");
    
    for (iCnt =0 ; iCnt< iSize; iCnt ++)
    {
        printf("%d",p[iCnt]);
    }

    Display(p , iSize);

    free(p);
    
    if(p == NULL)
    {
        printf("Memory Deleted");
    }

    return 0;
}