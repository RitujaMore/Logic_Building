class node {
    public int data;
    public node next;

    public Node(int value) {
        data = value;
        next = null;
    }
}

class SinglyCL {
    public node First;
    public node Last;
    public int Count;

    public SinglyCL() {
        System.out.println("Object of SinglyCircularLinkedList gets created successfully");
        First = null;
        Last = null;
        iCount = 0;
    }

    public void insertFirst(int No) {
        node newn = new node(No);

        if (First == null) {
            First = newn;
            Last = newn;
            Last.next = First;
        } else {
            newn.next = First;
            First = newn;
            Last.next = First;
        }

        iCount++;
    }

    public void insertLast(int No) {
        node newn = new node(No);

        if (First == null) {
            First = newn;
            Last = newn;
            Last.next = First;
        } else {
            Last.next = newn;
            Last = newn;
            Last.next = First;
        }

        iCount++;
    }

    public void display() {
        if (First == null) {
            System.out.println("Linked List is empty");
            return;
        }

        node temp = First;
        System.out.println("Elements of the LinkedList are: ");
        do {
            System.out.print("| " + temp.data + " |-> ");
            temp = temp.next;
        } while (temp != First);

        System.out.println("...");
    }

    public int count() {
        return count;
    }

    public void deleteFirst() {
        if (First == null) {
            System.out.println("Linked List is empty");
            return;
        } else if (First == Last) {
            First = null;
            Last = null;
        } else {
            First = First.next;
            Last.next = First;
        }

        iCount--;
    }

    public void deleteLast() {
        if (First == null) {
            System.out.println("Linked List is empty");
            return;
        } else if (First == Last) {
            First = null;
            Last = null;
        } else {
            node temp = First;
            while (temp.next != Last) {
                temp = temp.next;
            }
            temp.next = First;
            Last = temp;
        }

        iCount--;
    }

    public void insertAtPos(int No, int iPos) {
        if (iPos < 1 || iPos > iCount + 1) {
            System.out.println("Invalid Position");
            return;
        }

        if (iPos == 1) {
            insertFirst(no);
        } else if (iPos == iCount + 1) {
            insertLast(no);
        } else {
            node newn = new node(No);
            node temp = First;
            for (int i = 1; i < iPos - 1; i++) {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            count++;
        }
    }

    public void deleteAtPos(int iPos) {
        if (iPos < 1 || iPos > iCount) {
            System.out.println("Invalid Position");
            return;
        }

        if (iPos == 1) {
            deleteFirst();
        } else if (iPos == iCount) {
            deleteLast();
        } else {
            node temp = First;
            for (int i = 1; i < iPos - 1; i++) {
                temp = temp.next;
            }
            temp.next = temp.next.next;

            iCount--;
        }
    }
}

public class DSProgram415 {
    public static void main(String[] args) {
        SinglyCL obj = new SinglyCL();
        int iRet = 0;

        obj.insertFirst(101);
        obj.insertFirst(51);
        obj.insertFirst(21);
        obj.insertFirst(11);

        obj.insertLast(111);
        obj.insertLast(121);
        obj.insertLast(151);

        obj.insertAtPos(105, 5);

        obj.display();
        iRet = obj.count();

        System.out.println("Number of elements are: " + iRet);

        obj.deleteAtPos(5);

        obj.display();
        iRet = obj.count();

        System.out.println("Number of elements are: " + iRet);
    }
}
