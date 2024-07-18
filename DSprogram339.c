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
    printf("%d\t",First->data);
    First=First->next;

   } 
}



int main()
{
    PNODE Head=NULL; 
    InsertFirst(&Head,101);//InsertFirst(60,101);
    InsertFirst(&Head,51); // InsertFirst(60,51);
    InsertFirst(&Head,21);// 
    InsertFirst(&Head,11);
    
    Display(Head); // Display (100)
    
    return 0;

}