#include<stdio.h>
// Incomplete

void Reverse(char str[])
{
    int iCount = 0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    for(int iCnt = iCount ; iCnt >=0; iCnt--)
    {
        printf("%c",str[iCnt]);
    }
    printf("\n");

}

int main()
{
    char Arr[20];

    printf("Enter a String ..:\n");
    scanf(" %[^'\n']s" , Arr);

     Reverse(Arr);

    return 0;
}