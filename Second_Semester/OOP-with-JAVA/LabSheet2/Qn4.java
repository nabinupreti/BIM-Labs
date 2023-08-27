/* Write a program to read marks of five subject, then find the division and percentage.
a. Percentage greater or equal than 80, print distinction
b. Percentage between 60 to 80 -> first division
c. Percentage between 40 to 60 -> second division
d. Percentage below 40 -> fail*/
package LabSheet2;

import java.util.Scanner;

public class Qn4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double[] marks = new double[5];
        double total = 0;
        System.out.println("Enter marks obtained in 5 subject:");
        for (int i = 0; i < 5; i++) {
            System.out.print("Subject " + (i + 1) + ": ");
            marks[i] = sc.nextDouble();
            total += marks[i];
        }
        double per = total / 5.0;
        String div;
        if (per >= 80) {
            div = "Distinction";
        } else if (per >= 60) {
            div = "First Division";
        } else if (per >= 40) {
            div = "Second Division";
        } else {
            div = "Sorry you are FAILED in exam!!";
        }
        System.out.println("Percentage: " + per);
        System.out.println("Division: " + div);
        sc.close();
    }
}
