package linkedList;

public class LinearLinkedList {
    Node head;

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
        newNode.next = head;
        head = newNode;
        System.out.println("Inserted at first: " + head.data);
    }

    public void insertAtLast(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
        System.out.println("Inserted at last: " + data);
    }

    public void insertAtPosition(int pos, int data) {
        int tempos = pos;
        Node newNode = new Node(data);

        if (pos == 1) {
            newNode.next = head;
            head = newNode;
        } else {
            Node temp1 = head;
            Node temp = temp1;
            while (pos != 1) {
                if (temp1 != null) {
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
        }
    }

    public void deleteFromLast() {
        if (head == null) {
            System.out.println("Linked list is empty");
        } else {
            Node temp1 = head;
            Node temp2 = head.next;
            while (temp2.next != null) {
                temp1 = temp1.next;
                temp2 = temp2.next;
            }
            System.out.println("deleted from last: " + temp2.data);
            temp2 = null;
            temp1.next = null;
        }
    }

    public void deleteFromPosition(int pos) {
        int tempPos = pos;
        if (head == null) {
            System.out.println("Linked list is empty");
        } else if (pos == 1) {
            System.out.println("deleted from position 1 :" + head.data);
            head = head.next;
        } else {
            Node temp1 = head;
            Node temp2 = head;
            while (pos != 1) {
                if (temp2.next != null) {
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
        while (temp != null) {
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        LinearLinkedList list = new LinearLinkedList();
        list.insertAtFirst(1);
        list.insertAtLast(2);
        list.insertAtLast(3);
        list.display();
        list.insertAtPosition(2, 4);
        list.display();
        list.deleteFromPosition(2);
        list.display();
        list.deleteFromLast();
        list.deleteFromFirst();
        list.display();
    }

}
