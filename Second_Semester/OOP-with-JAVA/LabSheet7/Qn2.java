//Show an example of multiple try catch statement
package LabReport.LabSheet7;

public class Qn2 {
    public static void main(String[] args) {
        try {
            int a = 5 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception caught: Division by zero");
        } 
        try {
            int[] arr = new int[5];
            arr[6] = 8;
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array index out of bounds exception caught");
        } catch (Exception e) {
            System.out.println("Some other exception caught");
        }
    } 
}
