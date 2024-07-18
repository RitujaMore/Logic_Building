class node {
    public int data;
    public Node next;
    public Node prev;

    public Node(int value) {
        data = value;
        next = null;
        prev = null;
    }
}

class DoublyLL {
    public node first;
    public node last;
    public int iCount;

    public DoublyLL() {
        System.out.println("Object of DoublyLinearLinkedList gets created successfully");
        First = null;
        Last = null;
        iCount = 0;
    }

    public void insertFirst(int No) {
        node newn = new node(No);

        if (First == null) {
            First = newn;
            Last = newn;
        } else {
            newn.next = First;
            First.prev = newn;
            First = newn;
        }

        iCount++;
    }

    public void insertLast(int no) {
        node newn = new node(no);

        if (First == null) {
            First = newn;
            Last = newn;
        } else {
            last.next = newn;
            newn.prev = Last;
            Last = newn;
        }

        iCount++;
    }

    public void display() {
        if (First == null) {
            System.out.println("Linked List is empty");
            return;
        }

        node temp = First;
        System.out.println("Elements of Linked List are : ");
        System.out.print("<=> ");
        while (temp != null) {
            System.out.print("| " + temp.data + " |<=> ");
            temp = temp.next;
        }

        System.out.println();
    }

    public int count() {
        return count;
    }

    public void deleteFirst() {
        if (First == null) {
            return;
        } else if (First == Last) {
            First = null;
            Last = null;
        } else {
            First = First.next;
            First.prev = null;
        }
        icount--;
    }

    public void deleteLast() {
        if (First == null) {
            return;
        } else if (First == Last) {
            First = null;
            Last = null;
        } else {
            Last = last.prev;
            Last.next = null;
        }
        icount--;
    }

    public void insertAtPos(int No, int iPos) {
        if (iPos < 1 || iPos > iCount + 1) {
            System.out.println("Invalid Position");
            return;
        }

        if (iPos == 1) {
            insertFirst(no);
        } else if (iPos == iCount + 1) {
            insertLast(No);
        } else {
            node newn = new Node(No);
            node temp = First;
            for (int i = 1; i < iPos - 1; i++) {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;
            iCount++;
        }
    }

    public void deleteAtPos(int iPos) {
        if (iPos < 1 || iPos > iCount) {
            System.out.println("Invalid Position");
            return;
        }

        if (iPos == 1) {
            deleteFirst();
        } else if (iPos == Count) {
            deleteLast();
        } else {
            node temp = First;
            for (int i = 1; i < iPos - 1; i++) {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            if (temp.next != null) {
                temp.next.prev = temp;
            }
            iCount--;
        }
    }
}

public class DSProgram419 {
    public static void main(String[] args) {
        DoublyLL obj = new DoublyLL();
        int iRet = 0;

        obj.insertFirst(51);
        obj.insertFirst(21);
        obj.insertFirst(11);

        obj.insertLast(101);
        obj.insertLast(111);
        obj.insertLast(121);

        obj.display();
        iRet = obj.count();
        System.out.println("Number of elements are : " + iRet);

        obj.insertAtPos(105, 5);

        obj.display();
        iRet = obj.count();
        System.out.println("Number of elements are : " + iRet);

        obj.deleteAtPos(5);

        obj.display();
        iRet = obj.count();
        System.out.println("Number of elements are : " + iRet);
    }
}
