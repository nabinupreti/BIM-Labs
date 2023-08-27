/*Create a class named Shape with a method to print “this is shape”. Then create two 
other class named “Rectangle” and “circle” inheriting the class Shape both having 
method to print “this is rectangular” and “this is circular”. Create subclass Square that 
now inherits Rectangle which have its own method to display “this is square of 
rectangle”. Now call the method of Shape and Rectangle class by the object of square 
class inside the class having main method.*/
package LabReport.LabSheet5;
class Shape{
    public void display1(){
        System.out.println("This is shape");
    }
}
class Rectangle extends Shape{
    public void display2(){
        System.out.println("This is Rectangular");
    }
}
class Circle extends Shape{
    public void display3(){
        System.out.println("This is Circular");
    }
}
class Square extends Rectangle{
    public void display4(){
        System.out.println("This is square of Rectangle");
    }
}
public class Qn7 {
    public static void main(String[] args) {
        Square s1 = new Square();
        s1.display1();
        s1.display2();
        s1.display4();
    }
}
