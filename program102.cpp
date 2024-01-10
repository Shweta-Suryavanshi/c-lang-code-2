//program to print factorial using dynamic object
#include<iostream>
using namespace std;

class number
{
    private:
        int iNo;
    public :
        number(int x)
        {
            iNo=x;
        }  

        int Factorial()
        {
            int iCnt=0,iFact=1;
            for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                iFact=iFact*iCnt;
            }
            return iFact;
        }  
};
int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    number *nobj =new number(iValue);

    iRet=nobj->Factorial();

    cout<<"Factorial is:"<<iRet<<endl;

    delete nobj;

    return 0;
}