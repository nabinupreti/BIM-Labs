//Demonstrate an example of Generics Class
package LabReport.LabSheet9;
class Shows <T> {
    private T x;
    public Shows (T x){
        this.x = x;
    }
    public void display(){
        System.out.println("Value of x is "+x);
    }
}
public class Qn1 {
    public static void main(String[] args) {
        Shows <Integer> s1 = new Shows (5);
        s1.display();
        Shows <String> s2 = new Shows ("Nabin");
        s2.display();
    }
    
}
