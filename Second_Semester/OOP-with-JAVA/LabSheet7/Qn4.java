//4.	Show an example of throw and throws.
package LabReport.LabSheet7;

public class Qn4 {
    
    public static void main(String[] args) throws ArithmeticException{

        try {
            int x = 5;
            int y = 0;
            if(y==0){
                throw new ArithmeticException("Cannot divide by 0");
            }
            int result = x/y;//divide(x, y);
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println(e);
        }
    }

}
