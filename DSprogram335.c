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

int main()
{
    PNODE Head=NULL; 
    // head pointer ... no holdes any adress 
    /////////....1st obj cha adress head pointer madhe store honar

    return 0;

}