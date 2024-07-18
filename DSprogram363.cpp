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


        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No ,int iPos);

         void DeleteFirst();
         void DeleteLast();
         void DeleteAtPos(int iPos);


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