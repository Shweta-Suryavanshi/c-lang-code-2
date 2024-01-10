#include <stdio.h>
int CountDigit(int iNo)
{
    
    int iCnt=0;

    printf("Value of iNo is %d\n",iNo); //721

    while(iNo != 0)
    {
        iNo=iNo/10;
        iCnt++;
    }
    return iCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CountDigit(iValue);

    printf("Number of digits are:%d",iRet);

    return 0;
}