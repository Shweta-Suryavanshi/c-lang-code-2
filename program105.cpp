//program to print array elent using dynamic object
#include<iostream>
using namespace std;

class Array
{
   private:
        int *Arr; 
        int iSize;
   public:
        Array(int X) //parameterized constructor
        {
            iSize=X;
            Arr =new int[iSize];
        } 
        ~Array() //destructor
        {
             delete[]Arr;
        }
        void Accept() //member function
        {
            int iCnt=0;
            cout<<"Please enter the elements:"<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display() //member function
        {
            cout<<"Elements of the array are:"<<endl;
            int iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        int AdditionEven()
        {
            int iSum=0,iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                if(Arr[iCnt]%2 == 0)
                {
                    iSum=iSum+Arr[iCnt];
                }
            }
            return iSum;
        }
}; //end of class
int main()
{
    int ilength=0;
    int iRet=0;

    cout<<"enter the number of elements:"<<endl;
    cin>>ilength;

    Array *aobj=new Array(ilength);

    aobj->Accept();
    aobj->Display();

    iRet=aobj->AdditionEven();
    cout<<"Addition of even elements is:"<<iRet<<endl;

    delete(aobj);

    return 0;
}