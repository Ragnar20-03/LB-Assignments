#include<stdio.h>
// Incomplete

void Reverse(char *str)
{
    char *start = NULL;
    char *end  = NULL;
    char temp = '\0';

    start = str;
    end     = str;

        while(*end !='\0')
        {
            end++;
        }
        end --;
    
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

int main()
{
    char Arr[20];

    printf("Enter a String ..:\n");
    scanf(" %[^'\n']s" , Arr);

     Reverse(Arr);

     printf("String After reverse is .. : %s\n",Arr);

    return 0;
}