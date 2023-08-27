/*Write a program that ask student to enter his/her marks for 5 subject and print the 
grade obtained:
a. 80-100 -> grade A
b. 60-79 -> grade B
c. 40-59-> grade C
d. Below 40 -> grade F */
package LabSheet2;

import java.util.Scanner;

public class Qn6 {
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
        char gr;
        if (per >= 80) {
            gr = 'A';
        } else if (per >= 60) {
            gr = 'B';
        } else if (per >= 40) {
            gr = 'C';
        } else {
            gr = 'F';
        }
        System.out.println("Grade obtained: " + gr);
        sc.close();
    }
}
