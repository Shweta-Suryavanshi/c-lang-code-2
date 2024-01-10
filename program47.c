//code to count even number of elements in array
#include<stdio.h>
#include<stdlib.h>

int EvenDisplay(int Arr[],int iSize)
{
    int iCnt=0;
    int iEvenCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int iCount=0,iCnt=0;
    int *ptr=NULL;
    int iRet=0;

    printf("Enter number of elements\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));

    printf("Dynamic memory gets allocated succesfully for %d elements\n",iCount);

    printf("Enter the %d values\n",iCount);

    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\n Enter the element no %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet=EvenDisplay(ptr,iCount);
    printf("number of Even elements are %d\n",iRet);

    free(ptr);
    printf("Dymanic memory deallocated succecsfully");

    return 0;
}