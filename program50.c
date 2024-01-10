//program to find avarage
#include<stdio.h>
#include<stdlib.h>

float average(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return ((float)iSum/(float)iSize);
}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    float fRet=0.0;

    printf("Enter number of elements");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter element no %d",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    fRet= average(ptr,iCount);
    printf("Average is %f",fRet);

    free(ptr);
    return 0;
}