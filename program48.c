//code to write sum of elements of array.
#include<stdio.h>
#include<stdlib.h>

int SumArray(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt]; 
    }
    return iSum;
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

    iRet=SumArray(ptr,iCount);
    printf("Sum of all elements are %d\n",iRet);

    free(ptr);
    printf("Dymanic memory deallocated succecsfully");

    return 0;
}