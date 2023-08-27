
/*Write a program to show how string and integer input can be taken from user. */
import java.util.Scanner;

public class Qn8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your age: ");
        int age = sc.nextInt();
        System.out.println("Enter your name : ");
        String name = sc.next();
        System.out.println("Age: " + age + "\nName: " + name);
        sc.close();
    }
}
