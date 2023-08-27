/*Write a program to demonstrate use of break and continue
*/
public class Qn17 {
    public static void main(String[] args) {
        int i;
        System.out.println("Numbers from 0 to 10 skipping the num divisible by 3 are:");
        for (i = 0; i < 10; i++) {
            if (i % 3 == 0) {
                continue;
            }
            System.out.print(i + ", ");
        }
        System.out.println("\nLoop is terminated when i = 15:");
        for (i = 10; i < 30; i++) {
            if (i == 15) {
                break;
            }
            System.out.print(i + ", ");
        }
    }
}
