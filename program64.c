//input 4
//output D E F G
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    char ch ='\0';
    for(iCnt=1,ch='D';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
        
    }
}
int main()
{
    int iValue=0;

    printf("Enter the count\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}