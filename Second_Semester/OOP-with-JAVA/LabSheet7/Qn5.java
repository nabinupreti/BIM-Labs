//5.	Show the use of finally keyword in exception handling with an example.
package LabReport.LabSheet7;
import java.util.*;
public class Qn5 {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        System.out.println("Enter dividend and divisor: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        try{
            int res = a/b;
            System.out.println("Quotient is "+res);
        }catch(ArithmeticException e){
            System.out.println("Arithmetic Exception occured: "+e);
        }finally{
            System.out.println("This is finally block. It will always run no matter exception is caught or not!");
        }
    }
    
}
