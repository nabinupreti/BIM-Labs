package recursion;

import java.util.Scanner;

public class SumOfN {
    int sum(int n) {
        if (n == 1) {
            return n;
        }
        return n + sum(n - 1);

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SumOfN s = new SumOfN();
        System.out.println("Enter the value of n to find sum from 0 to n: ");
        int n = sc.nextInt();
        System.out.println("Sum of number from 0 to " + n + " is " + s.sum(n));
    }
}
