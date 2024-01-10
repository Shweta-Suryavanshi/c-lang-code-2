#include <stdio.h>
int SumDigit(int iNo)
{
    int iSum=0;
    int iDigit=0;

    printf("Value of iNo is %d\n",iNo); //721

    while(iNo != 0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=SumDigit(iValue);

    printf("Sum of digits are:%d",iRet);

    return 0;
}