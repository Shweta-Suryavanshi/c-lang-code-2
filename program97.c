//program to print given string in upper case
#include<stdio.h>
void struprX(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str -32;
        }
        str++;
       
    }
    
}
int main()
{
    char Arr[20];
    

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);
   printf("updated string is : %s\n ",Arr);

    return 0;
}