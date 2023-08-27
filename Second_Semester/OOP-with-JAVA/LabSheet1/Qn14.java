
/*Write a program to read marks of five subject and show percentage, total marks 
obtained and result (if obtained marks>35 pass otherwise fail) */
import java.util.Scanner;

public class Qn14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double[] marks = new double[5];
        double total = 0;
        int result = 0;
        System.out.println("Enter marks obtained in 5 subject:");
        for (int i = 0; i < 5; i++) {
            System.out.print("Subject " + (i + 1) + ": ");
            marks[i] = sc.nextDouble();
            if (marks[i] > 35) {
                result++;
            }
            total += marks[i];
        }
        double per = total / 5.0;
        System.out.println("Total Marks: " + total);
        System.out.println("Percentage: " + per);
        if (result == 5) {
            System.out.println("Result: PASS");
        } else {
            System.out.println("Result: FAIL");
        }
        sc.close();
    }
}
