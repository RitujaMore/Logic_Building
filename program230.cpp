// accept  n no from user .&& .count each digit from individual numbers 
// problems on n numbers & // problems on digits 

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
   
    void CalculateDigits()
    {
        int i=0;
        int iNo=0,iCount=0;
        
        for(i=0;i<iSize;i++)
        {
          //Arr[i]...arr madhlyadigit ch count 
          // while for digit counting 
            {
                iNo=Arr[i];
                while(iNo!=0)
                {
                    iCount++;
                    iNo=iNo/10;
                }
                cout<<Arr[i]<<"contains"<<iCount<<"digits in it"<<endl;            }
                iCount=0;


        }
        
        
    }
    
};


int main()
{
    int iLength=0;
    
    cout<<"enter number of elements tht you want to store :"<<endl;
    cin>>iLength;

    //ArrayX aobj(iLength); // static object 
    ArrayX *aobj=new ArrayX(iLength); // dynamic creaation 
    aobj->Accept();
    

   
   cout<<"Count of digits:"<<endl;

   delete aobj; /// dynamic memory so this line 

    return 0;
}


