
import java.util.*;

class CircularQueueArray {
    Scanner scan = new Scanner(System.in);
    final int size = 3;
    int queue[] = new int[size];
    int rear, front;

    CircularQueueArray() {
        rear = -1;
        front = -1;
    }

    public void input() {
        System.out.println("Please choose from given option:");
        System.out.println("1. Enqueue");
        System.out.println("2. Dequeue");
        System.out.println("3. Traverse");
        System.out.println("4. Exit");
        System.out.print("Enter your choice: ");
        int choice = scan.nextInt();
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                traverse();
                break;
            case 4:
                System.out.println("Thank you!!");
                System.exit(0);
            default:
                System.out.println("Invalid Choice!!");
        }
    }

    public void choice() {
        String ch;
        System.out.print("Do you want to continue(y/n): ");
        ch = scan.next();
        if (ch.equals("y"))
            input();
    }

    public void enqueue() {
        if (isFull()) {
            System.out.println("Queue is full cannot insert further data");
            return;
        }
        System.out.print("Enter a number to insert in queue: ");
        int data = scan.nextInt();
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % size;
        queue[rear] = data;
        System.out.println("Data inserted successfully!");
        choice();
    }

    public void dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is empty unable to remove data");
            return;
        } else {
            System.out.println("Element being dequed is " + queue[front]);
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % size;
            }
            choice();
        }
    }

    public void traverse() {
        if (isEmpty()) {
            System.out.println("Stack is empty cannot get data");
            return;
        }
        System.out.println("front index = " + front);
        System.out.println("Elements of queue:");
        for (int i = front; i != rear; i = (i + 1) % size) {
            System.out.print(queue[i] + "\t");
        }
        System.out.println(queue[rear]);
        System.out.println("Rear index= " + rear);
        choice();

    }

    public boolean isEmpty() {
        if (front == -1) {
            return true;
        }
        return false;
    }

    public boolean isFull() {
        if (front == 0 && rear == size - 1) {
            return true;
        }
        if (front == rear + 1) {
            return true;
        }
        return false;

    }

    public static void main(String[] args) {
        CircularQueueArray queue = new CircularQueueArray();
        queue.input();
    }
}