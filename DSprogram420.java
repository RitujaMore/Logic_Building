// stack 
class node // struct chya thikani class ..... actual object
{
    public int data; // acess specifier used
    public node next; // node next is reference

    public node(int Value) {
        data = Value;
        next = null;

    }
}

class Stack // LIFO
{
    public node First;
    public int iCount;

    public Stack() {
        System.out.println("object of Stack gets created suceesfully");
        First = null; // null is keyword in java so small
        iCount = 0;
    }

    public void Push(int No) // InsertLast

    {
        node newn = new node(No);
        if (First == null) {
            First = newn;
        } else {
            newn.next = First;
            First = newn;

        }
        iCount++;
    }

    public int Pop() // DeleteFirst
    {
        int Value = 0;
        if (First == null) {
            System.out.println("Stack is empty");
            return -1;
        } else {
            Value = First.data;
            First = First.next;

        }
        iCount--;
        return Value;
    }

    public void Display() {
        System.out.println("elements of stack are:");

        node temp = First;

        while (temp != null) {
            System.out.println(temp.data);
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

        obj.Push(10);
        obj.Push(20);
        obj.Push(30);
        obj.Push(40);

        obj.Display();

        iRet = obj.Pop();
        System.out.println("poped  element is:" + iRet);

        obj.Dislay();

    }

}