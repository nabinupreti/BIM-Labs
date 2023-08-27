package recursion;

import java.util.Scanner;

public class SumOfTwo {
    static Scanner sc = new Scanner(System.in);

    int sum(int num1, int num2) {
        if (num2 == 0) {
            return num1;
        }
        return 1 + sum(num1, num2 - 1);
    }

    public static void main(String[] args) {
        SumOfTwo s = new SumOfTwo();
        System.out.println("Enter two number to find sum: ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        System.out.println("Sum of" + num1 + " and " + num2 + " is " + s.sum(num1, num2));
    }
}
