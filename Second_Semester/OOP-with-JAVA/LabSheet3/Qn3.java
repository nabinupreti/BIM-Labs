/*Create a class Number having instance variable x and y both in integer, default constructor 
that set the value of x and y to 0, parameterized constructor that sets the value of x and y, 
method findOdd() that calculates the even no. occurring between x and y and display the 
result, findEven() that calculates the odd no. occurring between x and y and display the results. 
Now, create some instance of Number and invoke all the methods. */
package LabSheet3;

class Number {
    private int x, y;

    public Number() {
        x = 0;
        y = 0;
    }

    public Number(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void findOdd() {
        System.out.println("\nEven numbers between " + x + " and " + y + " are:");
        for (int i = x; i < y; i++) {
            if (i % 2 == 0) {
                System.out.print(i + ", ");
            }
        }
    }

    public void findEven() {
        System.out.println("\nOdd numbers between " + x + " and " + y + " are:");
        for (int i = x; i < y; i++) {
            if (i % 2 != 0) {
                System.out.print(i + ", ");
            }
        }
    }
}

public class Qn3 {
    public static void main(String[] args) {
        // Number n1 = new Number(); //calls default constructor
        // n1.findOdd();
        // n1.findEven();
        Number n2 = new Number(1, 30);
        n2.findOdd();
        n2.findEven();
    }
}
