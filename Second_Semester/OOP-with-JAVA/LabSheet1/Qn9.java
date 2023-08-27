
/*Write a program to check whether the input given by user is prime or composite */
import java.util.Scanner;

public class Qn9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n = sc.nextInt();
        int x = n;
        int flag = 0;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag++;
                break;
            }
        }
        if (flag == 0) {
            System.out.println(x + " is prime number.");
        } else {
            System.out.println(x + " is Composite number.");
        }
        sc.close();
    }
}