/*Create a generics class Rectangle that have instance variable length and breadth which accept any type with proper constructor to 
initialize the instance variable and display method that display the value of instance variable, getLength() method that returns the 
length of rectangle, getBreadth() method that returns the breadth of rectangle. Now create a GenericsDemo class with main method that
create object of Rectangle by sending different types and calculate the area and permiter of rectangle. Also display area and perimeter 
of Rectangle*/
package LabReport.LabSheet9;
class Rectangle <T>{
    private T length;
    private T breadth;
    public Rectangle(T length , T breadth){
        this.length=length;
        this.breadth=breadth;
    }
    public void display(){
        System.out.println("Length: "+length);
        System.out.println("Breadth: "+breadth);
    }
    public T getLength(){
        return length;
    }
    public T getBreadth(){
        return breadth;
    }
}
public class Qn5 {
    public static void main(String[] args) {
        Rectangle <Double> r1 = new Rectangle(10.5,12.5);
        System.out.println("Rectangle 1:");
        double len1 = r1.getLength();
        double bth1 = r1.getBreadth();
        r1.display();
        double area1 = len1*bth1;
        double per1 = 2*(len1+bth1);
        System.out.println("Area is "+area1);
        System.out.println("Perimeter is "+per1);
        
        Rectangle<Integer> r2 = new Rectangle (10,20);
        System.out.println("\nRectangle 2:");
        int len2 = r2.getLength();
        int bth2 = r2.getBreadth();
        r2.display();
        int area2 = len2*bth2;
        int per2 = 2*(len2+bth2);
        System.out.println("Area: "+area2);
        System.out.println("Perimeter: "+per2);
        
        
    }
    
}
