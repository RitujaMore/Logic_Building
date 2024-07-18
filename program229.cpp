//add average function in ArrayX class 

//class collabs for behavioursand characteristics 

#include<iostream>
using namespace std;

class ArrayX
{
    private:
    int *Arr;  //for characteristics 
    int iSize;
    public:
    ArrayX(int No) // resource of array  // cons : array la memory allocate 
    {
        cout<<"inside constructor"<<endl;
        iSize=No;
        Arr=new int[iSize];

    }
    {..}
    ~ArrayX() ///  desc :array chi memory deallocate 
    {
        cout<<"inside destructor"<<endl;
        delete[]Arr;

    }
    {..}
    void Accept()
    {
        int i=0;

        cout<<"enter the elements:"<<endl;
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }
    {..}
    void Display()
    {
        int i=0;

        cout<<"enter the elements:"<<endl;
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }
    {..}
    float Average()
    {
        int i=0,iSum=0;
        float fAns=0.0f;
        for(i=0;i<iSize;i++)
        {
            iSum=iSum+Arr[i];

        }
        fAns=(float)iSum/(float)iSize;
        return fAns;
    }
    {..}
};


int main()
{
    int iLength=0;
    float fRet=0.0f;
    cout<<"enter number of elements tht you want to store :"<<endl;
    cin>>iLength;

    //ArrayX aobj(iLength); // static object 
    ArrayX *aobj=new ArrayX(iLength); // dynamic creaation 
    aobj->Accept();
    aobj->Display();

   fRet=aobj->Average();

   cout<<"Average is:"<<fRet<<endl;

   delete aobj; /// dynamic memory so this line 

    return 0;
}

