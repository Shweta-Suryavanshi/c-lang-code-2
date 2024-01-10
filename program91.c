//program to count small letter
#include<stdio.h>
int Counts(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'z' )
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

   iRet= Counts(Arr);
   printf("Count is %d ",iRet);

    return 0;
}
