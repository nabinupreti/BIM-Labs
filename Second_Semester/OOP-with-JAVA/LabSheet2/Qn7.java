/*Write a program to calculate sum, multiplication, division, subtraction of two number 
based on the user choice. [Hint: ask two number input from user and one choice from 
user and perform operation using switch case] */
package LabSheet2;

import java.util.Scanner;

public class Qn7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 2 numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division");
        System.out.println("Enter your choice(1-4):");
        int ch = sc.nextInt();
        switch (ch) {
            case 1:
                System.out.println("Sum is " + (a + b));
                break;
            case 2:
                System.out.println("Difference is " + (a - b));
                break;
            case 4:
                System.out.println("Quotient is " + (a / b) + "\nRemainder is " + (a % b));
                break;
            case 3:
                System.out.println("Product is " + (a * b));
                break;
            default:
                System.out.println("Invalid Choice!!");
        }
        sc.close();
    }
}
