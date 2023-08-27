/*Write a program in java to demonstrate arithmetic operator, increment, decrement, 
comparison and Boolean logical operator */
public class Qn5 {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int sum = a + b;
        System.out.println("After adding a and b : " + sum);// arthmetic
        if (a > b) { // comparision
            System.out.println(a + "is greatest.");
        } else {
            System.out.println(b + " is greatest");
        }
        System.out.println("After incrementing a by 1 : " + ++a);// increment
        System.out.println("After decrementing b by 2 :" + --b);// decrement
        if (a > 0 && b > 0) { // Logical AND
            System.out.println("Both are positive integer");
        }
    }

}
