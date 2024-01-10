//program to find average of all elements of array.
#include<stdio.h>
#include<stdlib.h>

float average(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;
    float faverage=0.0f;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    faverage=((float)iSum/(float)iSize);
    return faverage;
}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    float fRet=0.0;

    printf("Enter number of elements\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter element no %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    fRet= average(ptr,iCount);
    printf("Average is %f",fRet);

    free(ptr);
    return 0;
}