import java.util.*;

class LinearQueueArray {
    Scanner scan = new Scanner(System.in);
    final int size = 5;
    int queue[] = new int[size];
    int rear, front;

    LinearQueueArray() {
        rear = -1;
        front = 0;
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
        System.out.println("Enter a number to insert in queue: ");
        int data = scan.nextInt();
        rear++;
        queue[rear] = data;
        System.out.println("Data inserted successfully!");
        choice();
    }

    public void dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is empty unable to remove data");
            return;
        }
        System.out.println("Deleted  " + queue[front]);
        front++;
        choice();
    }

    public void traverse() {
        if (isEmpty()) {
            System.out.println("Queue is empty cannot get data");
            return;
        }
        System.out.println("Front index = " + front);
        System.out.println("Elements of queue:");
        for (int i = front; i <= rear; i++) {
            System.out.print(queue[i] + "\t");
        }
        System.out.println("\nRear index = " + rear);
        choice();

    }

    public boolean isEmpty() {
        return (front > rear);
    }

    public boolean isFull() {
        return (rear == size - 1);
    }

    public static void main(String[] args) {
        LinearQueueArray queue = new LinearQueueArray();
        queue.input();
    }
}