#include<stdio.h>


void Convert(char *str)
{
    while (*str != '\0')
    {
         if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }

}

int main()
{
    char Arr[20];
       
    printf("Enter first string : \n");
    scanf("%[^'\n']s",Arr);

    Convert(Arr);

    printf("String After Modification : %s\n",Arr);

    return 0;
}