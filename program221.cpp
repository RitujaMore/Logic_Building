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
        cout<<"inside cponstructor"<<endl;
        iSize=No;
        Arr=new int[iSize];

    }
    ~ArrayX() ///  desc :array chi memory deallocate 
    {
        cout<<"inside destructor"<<endl;
        delete[]Arr;

    }



};

int main()
{
    int iLength=0;
    cout<<"enter number of elements tht you want to store :"<<endl;
    cin>>iLength;

    ArrayX aobj(iLength); // hi line direct line 11 la janar constructor kad 

    
    return 0;
}

