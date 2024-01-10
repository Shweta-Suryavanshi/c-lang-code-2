//program to find maximum element from array
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
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

    iRet= Maximum(ptr,iCount);
    printf("Maximum element is %d",iRet);

    free(ptr);
    return 0;
}