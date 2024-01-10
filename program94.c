//program to count space
#include<stdio.h>
int Countspace(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str == ' '  )
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

   iRet= Countspace(Arr);
   printf("Count is %d ",iRet);

    return 0;
}
