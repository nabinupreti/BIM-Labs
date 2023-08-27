/*Write a program using switch case to print the day depending upon number inputted 
by user. (if input is 1 print Sunday, if input is 2 print Monday and so on) */
package LabSheet2;

import java.util.Scanner;

public class Qn5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number from 1 - 7: ");
        int ch = sc.nextInt();
        String res;
        switch (ch) {
            case 1:
                res = "Sunday";
                break;
            case 2:
                res = "Monday";
                break;
            case 3:
                res = "Tuesday";
                break;
            case 4:
                res = "Wednesday";
                break;
            case 5:
                res = "Thursday";
                break;
            case 6:
                res = "Friday";
                break;
            case 7:
                res = "Saturday";
                break;
            default:
                res = "Invalid Choice!!";
        }
        System.out.println(res);
        sc.close();
    }
}
