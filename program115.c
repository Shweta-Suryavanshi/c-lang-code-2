#include<stdio.h>//printf scanf
#include<stdlib.h>//malloc calloc free dynamic merory allocation
struct node//declaration of a structure
{
    int data;
    struct node *next;
};

typedef struct node NODE;//new name for an existing data type
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
            //typecasting
    newn->data=No; //initialization
    newn->next=NULL;   

    if(*Head==NULL)//linked list is empty
    {
        *Head=newn;
    } 
    else
    {
        newn->next=*Head;
        *Head=newn;
    }    
}

void InsertLast(PPNODE Head,int No)//declaration
{
    //temporary pointer for linked list traversal
    PNODE temp=*Head;
    PNODE newn=(PNODE)malloc(sizeof(NODE));
            //typecasting
    newn->data=No; //initialization
    newn->next=NULL;   

    if(*Head==NULL)//linked list is empty
    {
        *Head=newn;
    } 
    else
    {
        //travel till to the last node
       while(temp->next != NULL)
       {
            temp = temp -> next;
       } 
       //add the address of new at the end of last node
       temp->next=newn;
    }    
}

void Display(PNODE Head)
{
    printf("Contents of linked list:\n");

    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
    printf("Null\n");
}

int count (PNODE Head)
{
    int iCnt=0;

    while(Head != NULL)
    {
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp=*Head;

    if(*Head==NULL)//case 1
    {
        return;
    }
    else if ((*Head)->next=NULL)//case 2
    {
        free(*Head);
        *Head=NULL;
    }
    else //case 3
    {
         *Head=(*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;

    if(*Head==NULL)//case 1
    {
        return;
    }
    else if ((*Head)->next=NULL)//case 2
    {
        free(*Head);
        *Head=NULL;
    }
    else //case 3
    {
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        temp->next==NULL;
    }
}

void InsertAtPos(PPNODE Head,int No,int iPos)
{
    int size=count(*Head);
    PNODE newn =NULL;
    int 1=0;
    PNODE temp=*Head;

    //case 1:invalid position(less than 1and greater than 7)
    if((iPos<1) || (iPos>size+1))
    {
        printf("Invalid posision\n");
        return;
    }

    //case 2:first position
    if(iPos==1)
    {
        InsertFirst(Head,No);
    }
    //case 3:lasr posision
    else if(iPos==size+1)
    {
        InsertLast(Head,No);
    }
    //case 4:position is in between first and last
    else
    {
        newn =(PNODE)malloc(sizeof(NODE));
        newn->data=No;
        newn->next=NULL;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}

void DeleteAtPos(PPNODE Head,int iPos)
{
    int size=count(*Head);

    //case 1:invalid position(less than 1and greater than 7)
    if((iPos<1) || (iPos>size))
    {
        printf("Invalid posision\n");
        return;
    }

    //case 2:first position
    if(iPos==1)
    {
        DeleteFirst(Head);
    }
    //case 3:lasr posision
    else if(iPos==size)
    {
        DeleteLast(Head);
    }
    //case 4:position is in between first and last
    else
    {
        
    }
}

int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet=count(First);
    printf("Number of nodes are:%d\n",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);

    Display(First);
    iRet=count(First);
    printf("Number of nodes are:%d\n",iRet);

    DeleteFirst(&First);

    Display(First);
    iRet=count(First);
    printf("Number of nodes are:%d\n",iRet);

    DeleteLast(&First);

    Display(First);
    iRet=count(First);
    printf("Number of nodes are:%d\n",iRet);

    return 0;
}