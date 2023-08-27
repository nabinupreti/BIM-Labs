public class QueueUsingLinkedList {
    class Node {
        String data;
        Node next;

        Node(String data) {
            this.data = data;
            this.next = null;
        }
    }

    Node front = null;
    Node rear = null;

    public void enqueue(String data) {
        Node newNode = new Node(data);
        if (isEmpty()) {
            rear = front = newNode;
        } else {
            rear.next = newNode;
            rear = newNode;
        }
        System.out.println("Inserted: " + rear.data);

    }

    public void dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return;
        }
        String data = front.data;
        front = front.next;
        System.out.println("Dequeued: " + data);
    }

    public void traverse() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return;
        }
        System.out.println("DISPLAYING QUEUE");
        Node tempNode = front;
        System.out.print("front -> ");
        while (tempNode.next != rear.next) {
            System.out.print(tempNode.data + " -> ");
            tempNode = tempNode.next;
        }
        System.out.println(tempNode.data);
    }

    public boolean isEmpty() {
        return (rear == null);
    }

    public static void main(String[] args) {
        QueueUsingLinkedList queue = new QueueUsingLinkedList();
        queue.enqueue("Apple");
        queue.enqueue("Ball");
        queue.enqueue("Cat");
        queue.traverse();
        queue.dequeue();
        queue.enqueue("Dog");
        queue.traverse();
    }

}
