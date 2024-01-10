#include<stdio.h>
#include<stdbool.h>

void DisplyaFactors(int iNo)
{
    int iCnt=0;
    printf("Factors of %d are :\n",iNo);

    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d",&iValue);

    DisplyaFactors(iValue);
    

    return 0;

}
// time complexity o(N)