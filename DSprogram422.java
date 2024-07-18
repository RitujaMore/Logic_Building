//Queue 
class node // struct chya thikani class ..... actual object
{
    public int data; // acess specifier used
    public node next; // node next is reference

    public node(int Value) {
        data = Value;
        next = null;

    }
}

class Queue // FIFO
{
    public node First;
    public int iCount;

    public Queue() {
        System.out.println("object of  Queue gets created suceesfully");
        First = null; // null is keyword in java so small
        iCount = 0;
    }

    public void EnQueue(int No) // InsertLast
    {
        node newn = new node(No);
        if (First == null) {
            First = newn;
        } else {
            node temp = First;
            while (temp.next != null)
                ;
            {
                temp = temp.next;
            }
            temp.next = newn;

        }
        iCount++;
    }

    public int DeQueue() // DeleteFirst
    {
        int Value = 0;
        if (First == null) {
            System.out.println(" Queue is empty");
            return -1;
        } else {
            Value = First.data;
            First = First.next;

        }
        iCount--;
        return Value;
    }

    public void Display() {
        System.out.println("elements of Queue are:");

        node temp = First;

        while (temp != null) {
            System.out.print(temp.data + "\t");
            temp = temp.next;
        }
        System.out.print();

    }

    public int Count() {
        return iCount;
    }

}

class DSprogram420 // main class
{
    public static void main(String Arg[]) {
        Stack obj = new Stack();
        int iRet = 0;

        obj.EnQueue(10);
        obj.EnQueue(20);
        obj.EnQueue(30);
        obj.EnQueue(40);

        obj.Display();

        iRet = obj.DeQueue();
        System.out.println("poped  element is:" + iRet);

        obj.Dislay();

    }

}