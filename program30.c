#include <stdio.h>
void Display(int iNo)
{
    int iDigit=0;
    

    printf("Value of iNo is %d\n",iNo); //721

    while(iNo != 0)
    {
        printf("--------------------------------------\n");
        iDigit=iNo%10;
        printf("Digit is: %d\n",iDigit);
        iNo=iNo/10;
        printf("Numner is:%d\n",iNo);
    }
}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}