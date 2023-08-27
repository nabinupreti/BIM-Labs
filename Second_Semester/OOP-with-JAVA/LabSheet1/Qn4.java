/*Write a program in java to demonstrate implicit and explicit type casting */
public class Qn4 {
    public static void main(String[] args) {
        int i = 100;
        float f = i;// smaller data type to bigger data type
        System.out.println("Impilicit type casting from int to float is " + f);
        double d = 89.3;
        int i1 = (int) d;// bigger data type to smaller data type
        System.out.println("Explicit typecasting from double to int is " + i1);
    }
}
