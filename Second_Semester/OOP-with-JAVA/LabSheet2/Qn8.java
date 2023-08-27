/*Write a program to read annual salary of an employee and calculate the tax and print 
the actual amount received by the employee
a. Salary up to 100000-> 1%
b. Salary above 100000 and below 5 lakh -> 5%
c. Salary above 5 lakh -> 10%
 */
package LabSheet2;

import java.util.Scanner;

public class Qn8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter annual Salary: ");
        double sal = sc.nextDouble();
        double tax;
        if (sal <= 100000) {
            tax = (1 / 100.0) * sal;
        } else if (sal <= 500000) {
            tax = (1 / 100.0) * 100000 + (5 / 100.0) * (sal - 100000);
        } else {
            tax = 100000 * (1 / 100) + 400000 * (5 / 100.0) + (sal - 500000) * (10 / 100.0);
        }
        System.out.println("Tax amount = " + tax);
        System.out.println("Net Salary = " + (sal - tax));
        sc.close();
    }
}
