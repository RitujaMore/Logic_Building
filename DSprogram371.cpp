
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;


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
    PNODE temp=First;
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
   PNODE temp=NULL;
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
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    } 
    iCount++;
}
void SinglyLL::InsertAtPos(int No,int iPos)
{
    PNODE newn=NULL;
    PNODE temp;
    int i=0;


    
    if((iPos<1) || (iPos>iCount+1))
    {
        cout<<"invalid position\n";
        return ;
    }
    if(iPos==1)
    {
        InsertFirst(No);


    }
    else if (iPos==iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        temp=First;
        newn=new NODE;
        newn->data=NULL;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

        iCount++;
    }
}

void SinglyLL::DeleteFirst()
{
    PNODE temp=First;
    if(First==NULL)
    {
        cout<<"LL is empty\n";
        return ;
    }
    else if (First->next==NULL)
    {
       delete First;
       First=NULL;
    }
    else
    {
        First=First->next;
        delete temp;

    }
    iCount--;
    
}
void SinglyLL::DeleteLast()
{
    PNODE temp=First;
    if(First==NULL)
    {
        cout<<"LL is empty\n";
        return ;
    }
    else if (First->next==NULL)
    {
       delete First;
       First=NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;

    }
    iCount--;
}
void SinglyLL::DeleteAtPos(int iPos)
{
    PNODE newn=NULL;
    PNODE temp1;
    PNODE temp2;
    int i=0;


    
    if((iPos<1) || (iPos>iCount))
    {
        cout<<"invalid position\n";
        return ;
    }
    if(iPos==1)
    {
        DeleteFirst();


    }
    else if (iPos==iCount)
    {
        DeleteLast();
    }
    else
    {
        temp1=First;
        
        for(i=1;i<iPos-1;i++)
        {
            temp1=temp1->next;
        }
        temp2 =temp1->next;
        temp1->next=temp2->next;
        delete temp2;

        
}
iCount--;
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

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    iRet=obj.Count();

    cout<<"number of elements are: "<<iRet<<endl;

    obj.DeleteFirst();
    obj.Display();

    iRet=obj.Count();

    cout<<"number of elements are: "<<iRet<<endl;
    
    obj.DeleteLast();
    obj.Display();

    iRet=obj.Count();

    cout<<"number of elements are: "<<iRet<<endl;


    obj.InsertAtPos(105,5);
    obj.Display();

    iRet=obj.Count();

    cout<<"number of elements are: "<<iRet<<endl;

    obj.DeleteAtPos(5);
    obj.Display();

    iRet=obj.Count();

    cout<<"number of elements are: "<<iRet<<endl;




    obj.Display();
    return 0;
}