//6.	Write a program to demonstrate custom exception by inheriting exception class
package LabReport.LabSheet7;

import java.util.Scanner;

class NegativeValueException extends Exception{
    @Override
    public String toString(){
        return "Length or breadth Cannot be -ve";
    }
}
class Rectangle{
    int length;
    int breadth;
    Scanner sc  = new Scanner(System.in);
    public void SetData(){
        System.out.print("Enter Length: ");
        length = sc.nextInt();
        System.out.print("Enter Breadth: ");
        breadth = sc.nextInt();
    }
    public int calcArea() throws NegativeValueException {
        if(length<0||breadth<0){
            throw new NegativeValueException();
        }
        else{
            return length*breadth;
        }
    }
}
public class Qn6 {
    public static void main(String[] args) {
        try{
            Rectangle r1 = new Rectangle();
            r1.SetData();
            int res = r1.calcArea();
            System.out.println("Area of Rectangle is "+res);
        }catch(NegativeValueException e){
            System.out.println(e);
        }
    }  
    
}
