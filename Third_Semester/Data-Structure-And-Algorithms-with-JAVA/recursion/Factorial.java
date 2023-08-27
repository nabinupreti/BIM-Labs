
package recursion;
import java.util.Scanner;

public class Factorial {
    static Scanner sc = new Scanner (System.in);
    
    int factorial(int n){
        if(n==0){ //base case
            return 1;
        }
        return n*factorial(n-1);
    }

    public static void main(String[] args) {
        Factorial fact = new Factorial();
        System.out.println("Enter a number to find factorial");
        int n = sc.nextInt();
        System.out.println("Factorial of "+n+" is "+fact.factorial(n));
    }
}
