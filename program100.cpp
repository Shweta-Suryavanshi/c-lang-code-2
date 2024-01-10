//program to print factorial of the given number
#include<iostream>
using namespace std;
int factorial(int iNo)
{
    int iFact=1;
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}
int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    iRet=factorial(iValue);
    cout<<"Factorial is :"<<iRet<<endl;

    return 0;
}