/*Create a class Numbers with three integer instance variables x, y and z. the class will have one 
constructor to set the value of instance variable and method getMax() that find the greatest 
number between x, y and z and return the results. Create one object of Number and invoke 
the method to find greates number.*/
package LabSheet3;

class Numbers {
    private int x;
    private int y;
    private int z;

    Numbers(int x, int y, int z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    public int getMax() {
        return (x > y ? x > z ? x : z : y > z ? y : z);
    }
}

public class Qn5 {
    public static void main(String[] args) {
        Numbers n1 = new Numbers(10, 50, 60);
        System.out.println("Greatest number is " + n1.getMax());
    }
}
