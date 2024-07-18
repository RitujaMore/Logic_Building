#include<stdio.h> // printf scanf sathi
#include<stdlib.h> //malloc calloc sathi 

struct node
{
    int data;                // members 
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First ,int No)   /// function declared  //adress send kely so insert first used
{

    PNODE newn=NULL;  
    PNODE temp=NULL;  
    
              
            
    newn=(PNODE)malloc(sizeof(NODE));   // dynamic  insert so malloc 
         
    newn->data=No;
    newn->next=NULL;
              
    if(*First==NULL)
    {
        *First=newn;
    }
    else  
    {
        temp=*First;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}   // o(N)

void InsertFirst(PPNODE First ,int No)   /// function declared  //adress send kely so insert first used
{

    PNODE newn=NULL;  
              
            
    newn=(PNODE)malloc(sizeof(NODE));   // dynamic memory allocate karto ya sentense mul 
         
    newn->data=No;
    newn->next=NULL;
              
    if(*First==NULL)
    {
        *First=newn;
    }
    else  
    {
         newn->next=*First;
         *First=newn;
    }
}   //o(1)

void Display(PNODE First)
{
   while(First !=NULL)
   {
    printf(" |%d |->",First->data);
    First=First->next;

   } 
   printf("NULL\n");
}// o(N)

int Count(PNODE First)
{
    int iCnt=0;
    while(First!=NULL)
    {
        iCnt++;
        First=First->next;
    }
    return iCnt;
}//o(N)

void DeleteFirst(PPNODE First)
{
    
    PNODE temp=NULL;

    if(*First==NULL)             //case 1
    {
        printf("unable to delete as LL is empty\n");
        return ;  // func chi return value void so no 0
    }
    else if((*First)->next==NULL)         // case 2
    {
        free(*First); // node delete 
        *First=NULL;

    }
    else              //case 3
    {
        temp =*First;
        *First=(*First)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    if(*First==NULL)             //case 1
    {
        printf("unable to delete as LL is empty\n");
        return ;  // func chi return value void so no 0
    }
    else if((*First)->next==NULL)         // case 2
    {
        free(*First); // node delete 
        *First=NULL;

    }
    else              //case 3
    {

    }
}



int main()
{
    PNODE Head=NULL; 
    int iRet=0;

    
    InsertFirst(&Head,51); // InsertFirst(60,51);
    InsertFirst(&Head,21);// 
    InsertFirst(&Head,11);
    
    
    InsertLast(&Head,101);//
    InsertLast(&Head,111); // 
    InsertLast(&Head,121);// 

    printf("Number of elements are:%d\n",iRet);
    DeleteFirst(&Head);

    Display(Head); // Display (100)

    iRet=Count(Head);

    printf("Number of elements are:%d\n",iRet);

    
    
    
    return 0;

}