/*
 Show an example of try catch by handling and two exceptions*/
package LabReport.LabSheet7;
import java.util.*;
public class Qn1TryCatch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter dividend: ");
        int a = sc.nextInt();
        System.out.println("Enter divisor: ");
        int b = sc.nextInt();
        try{
            int res = a/b;
            System.out.println("Quotient: "+res);
            int []arr = new int[5];
            arr[5]=20;
            System.out.println("Data saved in array.");
        }catch(ArithmeticException e){
            System.out.println("Cannot divide by Zero.Error:"+e.getMessage());
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index out of bounds. Error: "+e.getMessage());
        }
        System.out.println("After try catch statement");
    }
}
