/*Create a class Rectangle with attributes length and breadth. The class contains method 
computeArea() and displayArea(). Now, create two object of Rectangle and find area and 
display the area.
 */
package LabSheet3;

class Rectangle {
    private int length;
    private int breadth;

    public Rectangle(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public int computeArea() {
        return (length * breadth);
    }

    public void displayArea() {
        System.out.println("Area of rectangle is " + computeArea());
    }
}

public class Qn4 {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle(10, 5);
        r1.displayArea();
        Rectangle r2 = new Rectangle(50, 100);
        r2.displayArea();
    }
}
