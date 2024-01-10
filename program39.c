//to check number is palindrome or not using return
#include<stdio.h>
#include<stdbool.h>
bool ChkPalindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iCopy=iNo;
    
    while(iNo != 0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=iDigit+iRev*10;
    }
    return (iCopy==iRev);
    
}
int main()
{
    int iValue=0;
    bool iRet=false;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=ChkPalindrome(iValue);

    if(iRet==true)
    {
        printf("%d is palindrome",iValue);
    }
    else
    {
        printf("%d is not palindrome ",iValue);
    }
    return 0;
}