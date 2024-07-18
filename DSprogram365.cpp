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

void SinglyLL::Display()
{
    
    while(First!=NULL)
    {
        cout<<" | "<<First->data<<"->";
        First=First->next;
    }
    cout<<"Null\n";
}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(int No)
{
    PNODE newn=NULL;
 
    newn= new NODE;   //Malloc

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)  //if(iCount==0)
    {
        First=newn;
        
    }
    else
    {
        newn->next=First;
        First=newn;

    }
}
void SinglyLL::InsertLast(int No)
{

}
void SinglyLL::InsertAtPos(int No,int iPos)
{

}

void SinglyLL::DeleteFirst()
{

}
void SinglyLL::DeleteLast()
{

}
void SinglyLL::DeleteAtPos(int iPos)
{

}



int main()
{
    SinglyLL obj;
    int iRet=0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    iRet=obj.Count();

    cout<<"number of elements are: "<<iRet<<endl;

    obj.Display();
    return 0;
}