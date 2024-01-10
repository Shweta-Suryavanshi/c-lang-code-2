//program to print pattern using static object
#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;

    public:
        String()
        {
            iSize=20;
            str = new char[20];
        }

        String(int x)
        {
            iSize=x;
            str = new char[iSize];
        }
        ~String()
        {
            delete []str;
        }
        void Accept()
        {
            cout<<"Enter the string"<<endl;
            cin.getline(str,iSize);
        }
        void Display()
        {
            cout<<"String is :"<<endl;
        }
        int countcapital()
        {
            int iCnt=0;
            int *temp=str;
            while(*temp != '\0')
            {
                if(*temp >= 'A' && *temp  <= 'Z')
                {
                    iCnt++;
                }
                temp++;
            }
            return iCnt;
        }

};
  
int main()
{
    String *sobj1=new String(30);
    int iRet=0;
    //String sobj();
    sobj1->Accept();
    sobj1->Display();

    iRet=sobj1->countcapital();

    cout<<"Capital count is :"<<iRet<<endl;

    sobj1->Display();
    //delete sobj1;

    return 0;
}