//program to count occurance of 'character
#include<stdio.h>
int Counta(char str[],char ch)
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str == ch )
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
    char cValue='\0';
    int iRet=0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character of frequency\n");
    scanf(" %c",&cValue);

   iRet= Counta(Arr,cValue);
   printf("frequency of letter is %d\n",iRet);

    return 0;
}