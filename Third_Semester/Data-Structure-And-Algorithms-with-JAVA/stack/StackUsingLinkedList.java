class StackUsingLinkedList {
    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    Node top = null;

    public void push(int data) {
        Node newNode = new Node(data);
        newNode.next = top;
        top = newNode;
        System.out.println("Pushed: " + top.data);
    }

    public void pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty.");
            return;
        }
        int data = top.data;
        top = top.next;
        System.out.println("Popped: " + data);
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Nothing to display");
            return;
        }
        System.out.println("Displaying all stack: ");
        Node tempNode = top;
        System.out.print("top -> ");
        while (tempNode.next != null) {
            System.out.print(tempNode.data + " -> ");
            tempNode = tempNode.next;
        }
        System.out.println(tempNode.data);

    }

    public boolean isEmpty() {
        return (top == null);
    }

    public static void main(String[] args) {
        StackUsingLinkedList stack = new StackUsingLinkedList();
        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.display();
        stack.pop();
        stack.display();
    }
}