#include <stdio.h>

void OddDisplay(int *ptr)
{
    for(int i=1; i<= *ptr; i++)
    {
        if((i % 2) != 0)
        {
            printf("%d\n",i);
        }
    }
    // *ptr = 11;

}

int main()
{
    int iValue =0;

    printf("Enter a Number .:\n");
    scanf("%d",&iValue);

    OddDisplay(&iValue);


    // printf("%d\n\n",iValue);

    return 0;
}