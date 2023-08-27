package recursion;

import java.util.Scanner;

public class XpowY {
    int pow(int num1,int num2){
        if(num2 == 1){
            return num1;
        }
        return num1*pow(num1, num2-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter value of x and y to find x raise to power y: ");
        XpowY x = new XpowY();
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        System.out.println(num1+" raise to the power "+num2+" is "+x.pow(num1,num2));
    }
    
}
