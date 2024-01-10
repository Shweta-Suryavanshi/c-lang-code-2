#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0;

    printf("Elements of array are\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount=0,iCnt=0;
    int *ptr=NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));

    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);

    free(ptr);

    return 0;
}