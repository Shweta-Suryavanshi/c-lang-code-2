//program to find minimum and maximum element from array
#include<stdio.h>
#include<stdlib.h>

void Maxmin(int Arr[],int iSize)
{
    int iCnt=0;
    int iMin=Arr[0];
    int iMax=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt>iMax])
        {
            iMax=Arr[iCnt];
        }
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    printf("Maximum element is %d\n",iMax);
    printf("Minimum element is %d\n",iMin);
}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    

    printf("Enter number of elements\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter element no %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Maxmin(ptr,iCount);

    free(ptr);
    return 0;
}