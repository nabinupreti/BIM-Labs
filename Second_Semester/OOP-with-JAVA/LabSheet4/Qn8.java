/*Create an abstract class Calculation which has one normal method 
int add(int x, int y) which will calculate the sum of x and y and return 
the results and one abstract method int mul (int x, int y) that performs\
multiplication. Create a class Demo that inherit abstract class that implement
all the abstract method, and it have its own method int calcDiv(int x, int y)
that calculates the division between x and y and return the result.
Now create the object of Demo and demonstrate the above scenario.
After this access the method of abstract class using reference of abstract class */
package LabReport.LabSheet4;
abstract class Calculation {
    public int add(int x, int y) {
        return (x + y);
    }

    abstract int mul(int x, int y);
}

class Demo extends Calculation {
    public int mul(int x, int y) {
        return x * y;
    }

    public int calcDiv(int x, int y) {
        return x / y;
    }
}

public class Qn8 {
    public static void main(String[] args) {
        Demo d1 = new Demo();
        System.out.println("Sum is " + d1.add(50, 20));
        System.out.println("Product is " + d1.mul(50, 20));
        System.out.println("Quotient is " + d1.calcDiv(50, 20));
    }
}
