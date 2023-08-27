/*Solve the following using ternary operator:
a. Read a number from user and print whether that number is odd or even
b. Read a number from user and print whether that number is positive or 
negative
c. Read a three number from user and find greatest of three */
package LabSheet2;

import java.util.*;

public class Qn3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // whether that number is odd or even
        System.out.println("Enter a number to check odd or even:");
        int n1 = sc.nextInt();
        String s1 = (n1 % 2 == 0) ? "EVEN" : "ODD";
        System.out.println(n1 + " is " + s1);
        // whether that number is positive or negative
        System.out.println("Enter a number to check Positive or Negative:");
        int n2 = sc.nextInt();
        String s2 = (n2 > 0) ? "Positive" : "Negative";
        System.out.println(n2 + " is " + s2);
        // find greatest of three
        System.out.println("Enter three number to check greatest among them:");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int g = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
        System.out.println("Greatest number is " + g);
        sc.close();
    }

}
