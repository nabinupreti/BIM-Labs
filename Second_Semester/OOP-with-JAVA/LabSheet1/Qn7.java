/*Write a program to demonstrate all conditional statement (if, if…else, if..elseif..else) 
and loops (while, do while, for and for each loop)
 */
public class Qn7 {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int c = 30;
        // using if
        if (a > b) {
            System.out.println(a + " is greater than " + b);
        }
        // using if...else
        if (a < b) {
            System.out.println(a + " is smaller than " + b);
        } else {
            System.out.println(b + " is smaller than " + a);
        }
        // using if...else if...else
        if (a > b && a > c) {
            System.out.println(a + " is greatest.");
        } else if (b > a && b > c) {
            System.out.println(b + " is greatest");
        } else {
            System.out.println(c + " is greatest.\n");
        }
        // using while
        int num = 0;
        while (num != 2) {
            System.out.print(num++ + ", ");
        }
        // using do while
        do {
            System.out.print(num++ + ", ");
        } while (num != 4);
        // using for
        System.out.println("\nEven numbers between 1 to 10 are:");
        for (int i = 1; i < 10; i++) {
            if (i % 2 == 0) {
                System.out.print(i + ", ");
            }
        }
        // using for each loop
        int x[] = { 1, 2, 3 };
        for (int i : x) {
            System.out.println(i);
        }
    }

}
