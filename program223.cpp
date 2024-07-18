// class desiging  
#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;  //for characteristics 
    int iSize;

    ArrayX(int No) // resource of array  // cons : array la memory allocate 
    {
        cout<<"inside constructor"<<endl;
        iSize=No;
        Arr=new int[iSize];

    }
    ~ArrayX() ///  desc :array chi memory deallocate 
    {
        cout<<"inside destructor"<<endl;
        delete[]Arr;

    }
    void Accept()
    {
        int i=0;

        cout<<"enter the elements:"<<endl;
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }
    void Display()
    {
        int i=0;

        cout<<"enter the elements:"<<endl;
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }
    
};


int main()
{
    int iLength=0;
    cout<<"enter number of elements tht you want to store :"<<endl;
    cin>>iLength;

    ArrayX aobj(iLength); // hi line direct line 11 la janar constructor kad 
    aobj.Accept();
    aobj.Display();

    return 0;
}

