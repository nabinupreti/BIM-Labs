/*1. Create a class Work which consist of four methods with same name calculate (). 
If two parameter is passed calculate the sum between two parameter and display the result, 
if three parameter of type double is passed then find the multiplication between three parameter 
and return the result, if two parameter of float is passed then calculate difference between 
two parameter and display the result. Now create the instance of Work and invoke all the method to demonstrate method overloading condition */
package LabReport.LabSheet4;
class Work {
    public void calculate(int a, int b) {
        System.out.println("Sum is " + (a + b));
    }

    public double calculate(double a, double b, double c) {
        return (a * b * c);
    }

    public void calculate(float a, float b) {
        System.out.println("Difference is " + (a - b));
    }

}

public class Qn1 {
    public static void main(String[] args) {
        Work w1 = new Work();
        w1.calculate(10, 50);
        System.out.println("Product is " + w1.calculate(3.2, 30.4, 10.2));
        w1.calculate(15.5f, 5.5f);
    }
}