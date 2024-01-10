//program to count small letters//program to count occurance of 'a'
#include<stdio.h>
int Countdigit(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str == 'o' || *str == '9' )
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

   iRet= Countdigit(Arr);
   printf("Count is %d ",iRet);

    return 0;
}
