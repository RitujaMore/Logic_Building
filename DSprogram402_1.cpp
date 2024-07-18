// Stack 

template<class T>
#include<iostream>
using namespace std;

struct node
{
   T data;
    struct nodeQ *next;

};



class Queue
{
    private:
    struct nodeQ<T>* First;
    int iCount;

    public:
    Queue();
    void Display();
    int Count();
    void EnQueue(T No);    // InsertLast()
    int DeQueue();            // DeleteFirst()
};

Queue::Queue()  // constructor 
{
    First=NULL;
    iCount=0;
}
template<class T>
void Queue<T>:: Display()
{
    cout<<"Elements of Queue are:\n";
    struct nodeQ<T>* temp=First;

    while( temp != NULL);
    {
        cout<<temp->data<<"\t";  // in line 
        temp=temp->next;
    }
    cout<<"\t";
}
template<class T>
int Queue<T>:: Count()
{
    return iCount;
}
template<class T>
void Queue<T>:: EnQueue(T No) 
{
    struct nodeQ<T>* newn=NULL;
    struct nodeQ<T>* temp=NULL;
    newn =new nodeQ<T>;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        temp=First;
        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    iCount++;
} 
template<class T>
int Queue <T>:: DeQueue()       
{
    int iValue=0;
    struct nodeQ<T>* temp=NULL;


    if(First==NULL)
    {
        cout<<" unable to remove  elements as Queue is empty\n";
        return -1;
    }
    else
    {
        temp=First;

        iValue=First->data;
        First=First->next;
        delete temp;

        iCount--;

    }
    
    return iValue;
}


int main()
{
    int iRet =0;
    Queue<int> *iobj=new Queue<int>();

    iobj->EnQueue(10);
    iobj->EnQueue(20);
    iobj->EnQueue(30);
    iobj->EnQueue(40);

    iobj->Display();

    iRet=iobj->Count();

    cout<<"number of elements in Queue are:"<<iRet<<"\n";

    iRet=iobj->DeQueue();

    cout<<"removed element is :"<<iRet<<"\n";

     iRet=iobj->DeQueue();

    cout<<"removed element is :"<<iRet<<"\n";


    iobj->Display();

    iRet=iobj->Count();

    cout<<"number of elements in Queue are:"<<iRet<<"\n";

    iobj->EnQueue(50);
    
    iobj->Display();

    iRet=iobj->Count();

    cout<<"number of elements in Queue are:"<<iRet<<"\n";



    return 0;
}


