#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);



};

DoublyCL:: DoublyCL()
{
    First=NULL;
    Last=NULL;
    iCount=0;

}
void DoublyCL::Display()
{
    // Do while becoz of circular linked List 

    if(First==NULL &&Last==NULL)
    {
        cout<<"Linked List is Empty\n";
        return ;
    }
     cout<<"<=> ";
    do
    {
        cout <<"|"<<First->data<<"|<=>";
        First=First -> next;
    } while (Last -> next != First);
    
    
     cout<<"\n";
}
int DoublyCL::Count()
{
    return iCount;
}
void DoublyCL::InsertFirst(int No)
{
    PNODE newn=NULL;
    newn =new NODE;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((First==NULL) && (Last==NULL))
    {
        First=newn;
        Last=newn;

    }
    else
    {
      newn->next=First;  
      First->prev=newn;
      First=newn;
    }
    
    Last->next=First;
    First->prev=Last;

    iCount++;
}
void DoublyCL::InsertLast(int No)
{
    PNODE newn=NULL;

    newn =new NODE;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((First==NULL) && (Last==NULL))
    {
        First=newn;
        Last=newn;

    }
    else
    {
      Last->next=newn;
      newn->prev=Last;
      Last=newn;
    }
    
    Last->next=First;
    First->prev=Last;

    iCount++;
}
void DoublyCL::InsertAtPos(int No,int iPos)
{
    // 4 ( wrong ,, before 1st ,,after last ,,inBetwn)
    PNODE temp=NULL;
    PNODE newn =NULL;
    int i=0;

    if(iPos<1 || iPos>iCount+1)
    {
        cout<<"invalid position \n";
        return ;
    }
    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(No);
    }
    else //inbetween 
    {
        newn =new NODE;
        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        temp=First;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;

        }
        newn->next=temp->next;
        temp->next->prev=newn;

        temp->next=newn;
        newn->prev=temp;

        iCount++;
    }

}


void DoublyCL::DeleteFirst()
{
    if(First==NULL && Last==NULL)
    {
        return ;
    }
    else if (First==Last)//single node 
    {
        delete First;
        First=NULL;
        Last=NULL;

        
    }
    else // more than one node 
    {
        First=First->next;
        delete Last->next;

        First->prev=Last;
        Last->next=First;
    }
    iCount--;

}
void DoublyCL::DeleteLast()
{
    if(First==NULL && Last==NULL)
    {
        return ;
    }
    else if (First==Last)//single node 
    {
        delete First;
        First=NULL;
        Last=NULL;

        
    }
    else // more than one node 
    {
        Last=Last->prev;
        delete First->prev;
        
        Last->next=First;
        First->prev=Last;
    }

    iCount--;
}
void DoublyCL::DeleteAtPos(int iPos)
{
     PNODE temp=NULL;
     
     int i=0;

    if(iPos<1 || iPos>iCount)
    {
        cout<<"invalid position \n";
        return ;
    }
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==iCount)
    {
        DeleteLast();
    }
    else //inbetween 
    {
        

        temp=First;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;

        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;


        iCount--;
    }

}




int main()
{
    DoublyCL obj;
    int iRet=0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);


    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet=obj.Count();

    cout<<"Number of elements are:"<<iRet<<"\n";

   
    obj.DeleteAtPos(5);
    obj.Display();
    iRet=obj.Count();


    return 0;

}