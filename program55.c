//program to find frequency of 21 in the array.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iCnt=0;
    int iFrequency=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        
        if(Arr[iCnt]==21)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    

    printf("Enter number of elements\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter element no %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Frequency(ptr,iCount);
    printf("21 element occurs  %d times",iRet);

    free(ptr);
    return 0;
}