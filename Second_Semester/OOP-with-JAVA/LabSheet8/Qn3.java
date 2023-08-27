//3.	Show any 10-math function in java
package LabReport.LabSheet8;
public class Qn3 {
    public static void main(String[] args) {
        double num1 = 5.5;
        double num2 = 2.5;
        //using Math.ceil()
        System.out.println("Ceiling of "+num1+": "+Math.ceil(5.5));
        //Math.floor()
        System.out.println("Floor of "+num1+": "+Math.floor(num1));
        //Math.round()
        System.out.println("Round of "+num2+": "+Math.round(num2));
        //Math.max()
        System.out.println("Max of "+num1+" and "+num2+": "+Math.max(num1, num2));
        //Math.min()
        System.out.println("Min of "+num1+" and "+num2+": "+Math.min(num1, num2));
        //Math.pow()
        System.out.println(num1+" raised to the power "+num2+" : "+Math.pow(num1,num2));
        //Math.sqrt()
        System.out.println("Square root of 81: "+Math.sqrt(81));
        //Math.abs()
        System.out.println("Absolute value of -9: "+Math.abs(-9));
        //Math.sin()
        System.out.println("Sine of PI/2: "+Math.sin(Math.PI/2));
        //Math.randon()
        System.out.println("Random number between 0-100: "+(int)(Math.random()*100));
    
    }
}
