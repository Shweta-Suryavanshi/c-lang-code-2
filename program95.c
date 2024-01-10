//program to a with _
#include<stdio.h>
void replace(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str == 'a')
        {
            *str='_';
        }
        str++;
       // iCnt++;
    }
    //return iCnt;
}
int main()
{
    char Arr[20];
    

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    replace(Arr);
   printf("updated string is : %s\n ",Arr);

    return 0;
}
