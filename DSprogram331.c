// Data structure 


#include<stdio.h>
#include<stdlib.h> // for dynamic i.e malloc calloc 

struct node        // self referncial structure 
{
    int data;
    struct node*next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


int main()
{
    PNODE Head=NULL;
    //struct node*Head =NULL; //  head pointer 1st node la point kartoyy 


    NODE obj;
    //struct node obj;

    return 0;
}
