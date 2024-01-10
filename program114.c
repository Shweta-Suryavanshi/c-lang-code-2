#include<stdio.h>
#include<stdlib.h>
//structure declaration
struct node
{
    int data;             //4bytes
    struct node *next;    //8bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    //allocate memory for node
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    //initialize the node
    newn->data=No;
    newn->next=NULL;

    //check whether linked list is empty or not
    if(*Head==NULL) //LLis empty
    {
        *Head=newn;
    }
    else //LLcontains atleast 1 node in it
    {
        newn->next=*Head;
        *Head=newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of linked list are :\n");
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int count(PNODE Head)
{
    int iCnt=0;
    while (Head!=NULL)
    {
        iCnt++;
        Head= Head->next;
    }
    return iCnt;
    ;
}

int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);// display(100)
    iRet=count(First);

    printf("Number of nodes are %d",iRet);
}