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
    
              
            
    newn=(PNODE)malloc(sizeof(NODE));   // dynamic 
         
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
}   

void InsertFirst(PPNODE First ,int No)   /// function declared  //adress send kely so insert first used
{

    PNODE newn=NULL;  
              
            
    newn=(PNODE)malloc(sizeof(NODE));   // dynamic 
         
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
}   

void Display(PNODE First)
{
   while(First !=NULL)
   {
    printf(" |%d |->",First->data);
    First=First->next;

   } 
   printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt=0;
    while(First!=0)
    {
        iCnt++;
        First=First->next;
    }
    return iCnt;
}



int main()
{
    PNODE Head=NULL; 
    int iRet=0;
    InsertFirst(&Head,101);//InsertFirst(60,101);
    InsertFirst(&Head,51); // InsertFirst(60,51);
    InsertFirst(&Head,21);// 
    InsertFirst(&Head,11);
    
    Display(Head); // Display (100)

    iRet=Count(Head);

    printf("Number of elements are:%d\n",iRet);

    InsertLast(&Head,111);//
    InsertLast(&Head,121); // 
    InsertLast(&Head,151);// 
    
    
    
    return 0;

}