//3.	Show an example of nested catch statement
package LabReport.LabSheet7;

public class Qn3 {
    public static void main(String[] args) {
        try{
            int a = 5/0;
            int[]arr = new int[5];
            arr[6] = 10;
        }catch(ArithmeticException e){
            System.out.println("Arithmetic exception caught: "+e);
            try{
                String str = null;
                int len = str.length();
            }catch(NullPointerException ex){
                System.out.println("Null Pointer Exception Occurs: "+ex);
            }
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index out of Bound Exception : "+e);
        }
    }
}
