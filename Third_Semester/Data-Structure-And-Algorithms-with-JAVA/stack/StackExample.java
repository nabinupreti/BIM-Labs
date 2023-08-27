import java.util.Scanner;

class StackExample {
    static Scanner scan = new Scanner(System.in);
    int array[];
    int top = -1;
    int data;

    public void createStack() {
        System.out.print("Enter the size of stack: ");
        int size = scan.nextInt();
        array = new int[size]; // creating an array of given size
    }

    public void getChoice() {
        System.out.println("ENTER 1. FOR PUSH()");
        System.out.println("ENTER 2. FOR POP()");
        System.out.println("ENTER 3. FOR PEEK()");
        System.out.println("ENTER 4. For EXIT()");
        System.out.print("Please enter your choice: ");

        int choice = scan.nextInt();
        switch (choice) {
            case 1:
                push();
                return;
            case 2:
                pop();
                return;
            case 3:
                peek();
                return;
            case 4:
                System.exit(0);
            default:
                System.out.println("Invalid choice.");
        }
    }

    public void getData() {
        System.out.print("Enter a number to PUSH: ");
        data = scan.nextInt();
    }

    public void push() {
        if (isFull()) {
            System.out.println("Stack is Full ");
        } else {
            getData();
            top++;
            array[top] = data;
            System.out.println("Data inserted in to stack " + array[top]);
        }
    }

    public void pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty ");
        } else {
            System.out.println("popped " + array[top]);
            top--;
        }
    }

    public void peek() {
        System.out.println("At top value is " + array[top]);
    }

    public boolean isFull() {
        return top == array.length - 1;
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public static void main(String[] args) {
        StackExample s1 = new StackExample();
        s1.createStack();
        String ch;
        do {
            s1.getChoice();
            System.out.print("\nDo you want to continue(y/n): ");
            ch = scan.next();
        } while (ch.equals("y"));

    }
}