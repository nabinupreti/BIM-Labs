package LabReport.LabSheet4;


/*Write a java program that asks the user to enter number in an array of size ‘n’. 
then display only the numbers that are divisible by 2 and 3. */
import java.util.*;

public class Qn2 {
    public static void main(String[] args) {
        System.out.println("Enter the value of 'n': ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter " + n + " numbers: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();

        }
        System.out.println("Number divisible by 2 and 3 are: ");
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
                System.out.print(arr[i] + ", ");
            }
        }
        sc.close();
    }
}
