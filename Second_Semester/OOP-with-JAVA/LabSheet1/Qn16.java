
/*Write a program using switch case for following condition
• First take one number input from user
• If 1 is pressed then again make user to input another value (BBA, BIM, BCA) 
after this if BIM is chosen then print overall fee for BCA. Similarly for other.
• If 2 is pressed then make user to input another value (BBM, BBS). If BBM is 
chosen then print overall fee for BBM. Similarly for other */
import java.util.Scanner;

public class Qn16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Press 1 or 2:");
        int ch1 = sc.nextInt();
        switch (ch1) {
            case 1:
                System.out.println("Choose BBA, BIM or BCA:");
                String ch2 = sc.next();
                switch (ch2) {
                    case "BBA":
                        System.out.println("Fee of BBM is Rs.4,00,000.");
                        break;
                    case "BIM":
                        System.out.println("Fee of BIM is Rs.5,00,000.");
                        break;
                    case "BCA":
                        System.out.println("Fee of BCA is Rs.6,00,000.");
                        break;
                    default:
                        System.out.println("Invalid Choice!!");
                }
                break;
            case 2:
                System.out.println("Choose BBM or BBS: ");
                String ch3 = sc.next();
                switch (ch3) {
                    case "BBM":
                        System.out.println("Fee for BBM is Rs.3,00,000.");
                        break;
                    case "BBS":
                        System.out.println("Fee for BBS is Rs.4,00,000.");
                        break;
                    default:
                        System.out.println("Invalid Choice!!");
                }
                break;
            default:
                System.out.println("Invalid Choice!!");
        }
        sc.close();
    }
}
