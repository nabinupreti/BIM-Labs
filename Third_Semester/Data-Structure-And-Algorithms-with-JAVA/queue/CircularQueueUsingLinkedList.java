public class CircularQueueUsingLinkedList {
    int capacity;
    int occupied;

    public CircularQueueUsingLinkedList(int capacity) {
        this.capacity = capacity;
        this.occupied = 0;
    }

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }
    }

    Node front = null;
    Node rear = null;

    public void enqueue(int data) {
        Node newNode = new Node(data);
        if (isFull()) {
            System.out.println("Queue is full");
            return;
        }
        if (isEmpty()) {
            front = newNode;
        } else {
            rear.next = newNode;
        }
        rear = newNode;
        rear.next = front;
        occupied++;
        System.out.println("Inserted: " + rear.data);
    }

    public void dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is full.");
            return;
        }
        int data = front.data;
        front = front.next;
        rear.next = front;
        occupied--;

        System.out.println("Deleted: " + data);
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return;
        }
        Node tempNode = front;
        System.out.println("Displaying queue");
        System.out.print("front -> ");
        while (tempNode.next != rear.next) {
            System.out.print(tempNode.data + " -> ");
            tempNode = tempNode.next;
        }
        System.out.println(tempNode.data);
    }

    public boolean isEmpty() {
        return (occupied == 0);
    }

    public boolean isFull() {
        return (occupied == capacity);
    }

    public static void main(String[] args) {
        CircularQueueUsingLinkedList cQueue = new CircularQueueUsingLinkedList(3);
        cQueue.dequeue();
        cQueue.enqueue(1);
        cQueue.enqueue(2);
        cQueue.enqueue(3);
        cQueue.enqueue(4);
        cQueue.display();
        cQueue.dequeue();
        cQueue.enqueue(5);
        cQueue.display();
    }
}
