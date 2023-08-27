/*Write a program to read a four-digit number from user and perform following 
operation
a. Display each digit separately 
b. Print the sum of digits
c. Reverse the digits
d. Find the sum of square of each digit */
package LabSheet2;

import java.util.Scanner;

public class Qn2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a four digit number:");
        int num = sc.nextInt();
        sc.close();
        int rem, rev = 0, sum = 0, sumsq = 0;
        while (num != 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            sum += rem;
            sumsq += rem * rem;
            num = num / 10;
        }
        System.out.println("Sum of each digit is " + sum);
        System.out.println("Reverse of given number is " + rev);
        System.out.println("Sum of square of each digit is " + sumsq);
    }
}
