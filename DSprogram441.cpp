#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int no)
        {
            iSize=no;                        // 2 characters
            Arr=new T [iSize];

        }
        ~ArrayX()
        {
            delete[]Arr;              // deallocate 
        }

        void Accept()
        {
            int i=0;  // loop counter

            cout<<"enter the elements:\n";
            for(i=0;i<iSize;i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i=0;
            cout<<"Elements of the array are:\n";
             for(i=0;i<iSize;i++)
            {
                cout<<Arr[i]<<"\n";
            }

        }

        T Addition()
        {
            int i=0;
            T Sum=0;

            for(i=0;i<iSize;i++)
            {
              Sum=Sum+Arr[i];
            }
            return Sum;


        }
};

int main()
{
    ArrayX <int> aobj(5);   // T la int replace karnar 
    int iRet=0;

    aobj.Accept();
    aobj.Display();
    
    iRet=aobj.Addition();

    cout<<"Addition is :"<<iRet<<"\n";

    return 0;
}