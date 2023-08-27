package LabReport.LabSheet4;

/*Create an abstract class Calculator having abstract methods calcPrime(int x, int y),
 calcEven(int x, int y). Now create a class SimpleCalculator that 
 inherit an abstract class and provide the implementation of abstract method */
abstract class Calculator {
    abstract void calcPrime(int x, int y);
    abstract void calcEven(int x, int y);
}

class SimpleCalculator extends Calculator {
    public void calcPrime(int x, int y) {
        System.out.println("Prime number between " + x + " to " + y + " are: ");
        for (int i = x; i < y; i++) {
            int flag = 0;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    flag++;
                    break;
                }
            }
            if (flag == 0) {
                System.out.print(i + ", ");
            }
        }

    }

    public void calcEven(int x, int y) {
        System.out.println("\nEven number between " + x + " to " + y + " are:");
        for (int i = x; i < y; i++) {
            if (i % 2 == 0) {
                System.out.print(i + ",");
            }
        }
    }
}

public class Qn10 {
    public static void main(String[] args) {
        SimpleCalculator s1 = new SimpleCalculator();
        s1.calcPrime(1, 50);
        s1.calcEven(1, 50);
    }
}
