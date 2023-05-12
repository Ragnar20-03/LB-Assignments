# include<stdio.h>

// Not Solved Yet ...
// Digit Into Word ..

void Display( int *ptr)
{
    int iCnt =1;

    if(*ptr > 9)
    {
        printf("Invalid Number ...\n");
    }
    while (iCnt != *ptr )
    {
        iCnt++;
    }
    printf("  ");
}

int main()
{   
    int iValue =0;

    printf("Enter A Number : \n");
    scanf("%d" , &iValue);

    Display(&iValue);

    return 0;
}