/*Create a class Shape that contains instance variable length, breadth and height. Create a 
default constructor that sets the value of instance variable to zero, constructor with two 
parameter that will sets the value of length and breadth only and constructor with three 
parameter that will sets the value of length, breadth and height. After this create 
calcAreaRectangle() that calculates the area of rectangle, calcVolumeBox() that calculates 
volume of box and display the result. Now create first object of Shape wihich will have name 
rectangle and calls constructor with two parameter and calAreaRectangle() method, create 
second object of Shape that will have name Box which will call constructor with three 
parameter and calcVolumeBox() method */
package LabSheet3;

class Shape {
    private int length, breadth, height;

    Shape() {
        length = 0;
        breadth = 0;
        height = 0;
    }

    Shape(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    Shape(int length, int breadth, int height) {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    public void calcAreaRectangle() {
        System.out.println("Area of rectangle is " + (length * breadth));
    }

    public void calcVolumeBox() {
        System.out.println("Volume of box is " + (length * breadth * height));
    }
}

public class Qn8 {
    public static void main(String[] args) {
        Shape rectangle = new Shape(20, 10);
        rectangle.calcAreaRectangle();
        Shape box = new Shape(5, 10, 5);
        box.calcVolumeBox();
    }

}
