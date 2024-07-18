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

    public void InsetLast(int No) {
        node newn = null;
        node temp = null;

        newn = new node();

        newn.data = No; // no pointer so .
        newn.next = null;

        if (First == null) {
            First = newn;
        } else {
            temp = First;
            while (temp.next != null) {
                temp = temp.next;

            }
            temp.next = newn;
        }
        iCount++;
    }

    public void Display() {
        System.out.println("elements of the linked list :");

        node temp = First;

        while (temp != null) {
            System.out.print("| " + temp.data + " |->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count() {
        return iCount;
    }

    public void DeleteFirst() {
        if (First == NULL) {
            System.out.println("LL is empty");
            return;
        } else {
            First = First.next;

        }
        iCount--;
    }

    public void DeleteLast() {

        if (First == NULL) {
            System.out.println("LL is empty");
            return;
        } else if (First.next == null) // single node
        {
            First = null;
        } else {
            node temp = First;
            while (temp.next.next != null)
                ;
            {
                temp = temp.next;
            }
            temp.next = null;

        }
        iCount--;
    }

}

class DSprogram412 // main class
{

    public static void main(String Arg[]) {
        SinglyLL obj = new SinglyLL(); /// SinglyLL obj;
        int iRet = 0;

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of elements are:" + iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of elements are:" + iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of elements are:" + iRet);

    }
}