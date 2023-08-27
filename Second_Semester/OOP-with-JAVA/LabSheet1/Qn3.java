/*Write a program to describe floating point literals (exponential and normal), Boolean 
literals, character literals, string literals (uses of escape sequence.) */
public class Qn3 {
    public static void main(String[] args) {
        float f1 = 3.6f;
        float f2 = 8.2E-4f;
        boolean b = false;
        char ch = 'a';
        String s = "Hello World!";

        System.out.println("Floating point literal is " + f1);
        System.out.println("Floating point Exponential literal is " + f2);
        System.out.println("Boolean literal is " + b);
        System.out.println("Character literal is " + ch);
        System.out.println("String literal is " + s);
    }
}
