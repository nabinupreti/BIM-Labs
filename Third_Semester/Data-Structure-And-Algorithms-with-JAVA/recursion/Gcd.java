package recursion;

import java.util.Scanner;

public class Gcd {
    
    int gcd(int num1 , int num2 ){
        if(num2==0){
            return num1;
        }
        int rem = num1%num2;
        return gcd(num2, rem);
    
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter two number to find GCD: ");
        Gcd g = new Gcd();
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        System.out.println("GCD("+num1+","+num2+") is "+g.gcd(num1, num2));
    }
}
