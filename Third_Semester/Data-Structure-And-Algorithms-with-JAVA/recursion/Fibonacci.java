package recursion;

import java.util.Scanner;

public class Fibonacci {
    int fib(int num) {
        if (num <= 1) {
            return num;
        } else {
            return fib(num - 1) + fib(num - 2);
        }
    }

    public static void main(String[] args) {
        Fibonacci f = new Fibonacci();
        Scanner sc = new Scanner(System.in);
        System.out.println("How many terms of fibonacci series do you want: ");
        int num = sc.nextInt();
        for (int i = 0; i <= num; i++) {
            System.out.print(f.fib(i) + " ");
        }
        sc.close();

    }

}
