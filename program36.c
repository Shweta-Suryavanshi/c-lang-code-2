//normal code for reverse the number
#include<stdio.h>
int RevDigit(int iNo)
{
    int iDigit=0;
    int iRev=0;
    while(iNo != 0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=iDigit+iRev*10;
    }
     return iRev;

}
int main()
{
    int iValue=7215;
    int iRet=0;
    iRet=RevDigit(iValue);
    printf("Reverse no is:%d",iRet);
    return 0;
}