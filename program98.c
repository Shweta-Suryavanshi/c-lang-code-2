//program to print small character to capital and capital to small
#include<stdio.h>
void strtoggleX(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str +32;
        }
        else if(*str >= 'a' && *str<= 'z') 
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

    strtoggleX(Arr);
   printf("updated string is : %s\n ",Arr);

    return 0;
}