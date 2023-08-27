/*How static polymorphism is achieved in java? Show a program
=> In Java, static polymorphism is implemented using method overloading. 
Method overloading occurs when a class has multiple methods with the same name,
but different parameter lists. When a method is called, the Java compiler
determines which version of the method to execute based on the number, type,
and order of the arguments passed to the method.
Here is an example of method overloading in Java:*/
package LabReport.LabSheet4;
class Calculator {

    // Overloaded add method with two integer arguments
    public int add(int x, int y) {
        return x + y;
    }

    // Overloaded add method with three integer arguments
    public int add(int x, int y, int z) {
        return x + y + z;
    }

    // Overloaded add method with two double arguments
    public double add(double x, double y) {
        return x + y;
    }

    public class Qn6 {
        public static void main(String[] args) {
            Calculator calc = new Calculator();

            // Call the add method with two integer arguments
            int sum1 = calc.add(10, 20);
            System.out.println("Sum of 10 and 20 is: " + sum1);

            // Call the add method with three integer arguments
            int sum2 = calc.add(10, 20, 30);
            System.out.println("Sum of 10, 20, and 30 is: " + sum2);

            // Call the add method with two double arguments
            System.out.println("Sum of 1.5 and 2.5 is: " + calc.add(1.5, 2.5));
        }
    }

}
