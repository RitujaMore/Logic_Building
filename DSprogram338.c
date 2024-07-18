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

    PNODE newn=NULL;  // newn is pointer i.e newnode
              
              //step1 : Allocate dynamic memory for new node 

    newn=(PNODE)malloc(sizeof(NODE));   // dynamic 

             //step2: initialise the new node
    newn->data=No;
    newn->next=NULL;
 
              //// step 3: check is linked list or empty
    if(*First==NULL)
    {
        *First=newn;
    }
    else // if linked list contains atleast one node in it 
    {
         newn->next=*First;
         *First=newn;
    }
}     



int main()
{
    PNODE Head=NULL; 
    
    InsertFirst(&Head,51); // InsertFirst(60,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    
    return 0;

}