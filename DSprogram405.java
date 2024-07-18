class node // struct chya thikani class ..... actual object
{
    public int data; // acess specifier used
    public node next; // node next is reference
}

class SinglyLL {
    public node First;
    public int iCount;

    public SinglyLL() {
        System.out.println("object of singlyLL gets created suceesfully");
        First = null; // null is keyword in java so small
        iCount = 0;
    }

    public void InsertFirst(int No) {
        node newn = null;

        newn = new node();

        newn.data = No; // no pointer so .
        newn.next = null;

        if (First == null) {
            First = newn;
        } else {
            newn.next = First;
            First = newn;
        }
        iCount++;
    }

    public void Display() {
        System.out.println("elements of the linked list :");

        node temp = First;

        while (temp != null) {
            System.out.print("|" + temp.data + "|->");
            temp = temp.next;
        }
        System.out.println("null");
    }

}

class DSprogram405 // main class
{
    public static void main(String Arg[]) {
        SinglyLL obj = new SinglyLL(); /// SinglyLL obj;

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

    }
}