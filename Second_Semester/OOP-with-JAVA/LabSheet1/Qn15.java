
/*Write a program to demonstrate switch case statement and nested switch case 
statement.
 */
import java.util.Scanner;

public class Qn15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1 or 2:");
        int ch1 = sc.nextInt();
        switch (ch1) {
            case 1:
                System.out.println("Choose MOMO or PIZZA:");
                String ch2 = sc.next();
                switch (ch2) {
                    case "MOMO":
                        System.out.println("Your MOMO is arriving soon.");
                        break;
                    case "PIZZA":
                        System.out.println("PIZZA is not available.");
                        break;
                    default:
                        System.out.println("Invalid Choice");
                }
                break;
            case 2:
                System.out.println("Choose TEA or COFFEE:");
                String ch3 = sc.next();
                switch (ch3) {
                    case "TEA":
                        System.out.println("Price of tea is Rs.35.");
                        break;
                    case "COFFEE":
                        System.out.println("Price of coffee is Rs.99.");
                        break;
                    default:
                        System.out.println("Invalid Choice");
                }
                break;
            default:
                System.out.println("Wrong choice!!");
        }
        sc.close();
    }
}
