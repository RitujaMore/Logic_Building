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

//void Display(PNODE First)     // value pathvli so disply
//{

//}

int main()
{
    PNODE Head=NULL; 
    // head pointer ... no holdes any adress 
    //....1st obj cha adress head pointer madhe store honar

    InsertFirst(&Head,51);// head is * single star ... tyacha adress ghenara PPNODe i.e **
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    //Display(Head);
    
    return 0;

}