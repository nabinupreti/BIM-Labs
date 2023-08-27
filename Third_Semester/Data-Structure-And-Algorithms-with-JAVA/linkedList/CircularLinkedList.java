public class CircularLinkedList {
    Node head = null;
    Node tail = null;

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public void insertAtFirst(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            tail = newNode;
            tail.next = head;
        } else {
            newNode.next = head;
            head = newNode;
            tail.next = head;
        }
        System.out.println("Inserted at first: " + head.data);
    }

    public void insertAtLast(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            insertAtFirst(data);
        } else {
            tail.next = newNode;
            tail = newNode;
            tail.next = head;
        }
        System.out.println("Inserted at last: " + data);
    }

    public void insertAtPosition(int pos, int data) {
        Node newNode = new Node(data);
        int tempos = pos;
        if (head == null || pos == 1) {
            insertAtFirst(data);
        } else {
            Node temp = head;
            Node temp1 = head;

            while (pos != 1) {
                if (temp1 != tail) {
                    temp = temp1;
                    temp1 = temp1.next;
                    pos--;
                } else {
                    System.out.println("Given position not found in list.");
                    return;
                }
            }
            newNode.next = temp1;
            temp.next = newNode;
        }
        System.out.println("inserted at position " + tempos + " :" + data);
    }

    public void deleteFromFirst() {
        if (head == null) {
            System.out.println("Linked list is empty");
        } else {
            System.out.println("deleted from first:" + head.data);
            head = head.next;
            tail.next = head;
        }
    }

    public void deleteFromLast() {
        if (head == null) {
            System.out.println("Linked list is empty");
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            System.out.println("deleted from last: " + tail.data);
            temp.next = head;
            tail = temp;
        }
    }

    public void deleteFromPosition(int pos) {
        int tempPos = pos;
        if (head == null) {
            System.out.println("Linked list is empty");
        } else if (pos == 1) {
            deleteFromFirst();
        } else {
            Node temp1 = head;
            Node temp2 = head;
            while (pos != 1) {
                if (temp2.next != tail) {
                    temp1 = temp2;
                    temp2 = temp2.next;
                    pos--;
                } else {
                    System.out.println("Given position not exist in list");
                    return;
                }
            }
            temp1.next = temp2.next;
            System.out.println("deleted from position " + tempPos + ": " + temp2.data);
            temp2 = null;
        }
    }

    public void display() {
        System.out.println("Displaying List:");
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        Node temp = head;
        do {
            System.out.print(temp.data + "->");
            temp = temp.next;
        } while (temp != head);
        System.out.println("head");
        return;
    }

    public static void main(String[] args) {
        CircularLinkedList list = new CircularLinkedList();
        list.insertAtFirst(10);
        list.insertAtLast(20);
        list.insertAtLast(30);
        list.display();
        list.insertAtPosition(3, 40);
        list.display();
        list.deleteFromPosition(4);
        list.display();
        list.deleteFromLast();
        list.deleteFromFirst();
        list.display();
    }
}
