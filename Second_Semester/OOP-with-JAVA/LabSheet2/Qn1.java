/*Write a program to take two number input from user, divide first number by second 
and display quotient and remainder obtained from division operation */
package LabSheet2;

import java.util.Scanner;

public class Qn1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers for division:");
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("Quotient = " + a / b);
        System.out.println("Remainder = " + a % b);
        sc.close();
    }
}
