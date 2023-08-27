
/*Write a program to check whether the input given by user is odd or even. */
import java.util.Scanner;

public class Qn10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = sc.nextInt();
        if (n % 2 == 0) {
            System.out.println(n + " is Even.");
        } else {
            System.out.println(n + " is Odd.");
        }
        sc.close();
    }
}
