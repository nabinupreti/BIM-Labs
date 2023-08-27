
/*Make an array of integers of size 30 and store 30 integer in it then display the integers that are 
between 16 and 47 */
package LabReport.LabSheet4;
import java.util.*;

public class Qn3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[30];
        System.out.println("Enter 30 numbers: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        sc.close();
        System.out.println("Numbers between 16 and 47 are: ");
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= 16 && arr[i] < 47) {
                System.out.print(arr[i] + ", ");
            }
        }
    }
}
