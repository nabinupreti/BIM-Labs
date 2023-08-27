/*Create a class Box with attributes length, breadth and height. The class contains method 
computeVolume() that computes the volume of box and return the volume. Now, create two 
object of box and find volume and display it.
 */
package LabSheet3;

class Box {
    private int length, breadth, height;

    Box(int length, int breadth, int height) {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    public int computeVolume() {
        return (length * breadth * height);
    }
}

public class Qn6 {
    public static void main(String[] args) {
        Box b1 = new Box(5, 5, 10);
        System.out.println("Area of Box is " + b1.computeVolume());
    }

}
