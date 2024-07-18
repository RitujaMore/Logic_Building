#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE; // not used in cpp 

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL(); // prototype  of constructor 


        

};

SinglyLL::SinglyLL()
{
     cout<<"Inside Constructor\n";
     First=NULL;
     iCount=0;
}




int main()
{
    SinglyLL obj;


    return 0;
}