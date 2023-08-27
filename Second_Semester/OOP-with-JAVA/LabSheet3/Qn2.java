/*Create a class Calculate which contains data member num1 and num2 both in integer and 
methods setCalc() to set the data, calcSum() that calculate the sum of num1 and num2 and 
display the result, calcMulti() that calculate the multiplication of num1 and num2 and returns 
the result, calcDifference that calculate the difference between num1 and num2 and display 
the result. Now, create some instance of Calculate and invoke all the methods. */
package LabSheet3;

class Calculate {
    private int num1, num2;

    public void setCalc(int num1, int num2) {
        this.num1 = num1;
        this.num2 = num2;
    }

    public void calcSum() {
        System.out.println("Sum is " + (num1 + num2));
    }

    public int calcMulti() {
        return (num1 * num2);
    }

    public void calcDifference() {
        System.out.println("Difference is " + (num1 - num2));
    }
}

public class Qn2 {
    public static void main(String[] args) {
        Calculate c1 = new Calculate();
        c1.setCalc(30, 20);
        c1.calcSum();
        System.out.println("Product is " + (c1.calcMulti()));
        c1.calcDifference();
    }
}
