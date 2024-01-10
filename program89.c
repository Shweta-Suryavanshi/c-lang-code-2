//program to count occurance of 'a'
#include<stdio.h>
int Counta(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'A' )
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

   iRet= Counta(Arr);
   printf("Count is %d ",iRet);

    return 0;
}