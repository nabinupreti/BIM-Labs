/*Write a program to print even number between 300 to 500 */
public class Qn12 {
    public static void main(String[] args) {
        System.out.println("Even number between 300 to 350 are:");
        for (int i = 300; i <= 350; i++) {
            if (i % 2 == 0) {
                System.out.print(i + ", ");
            }
        }
    }
}
