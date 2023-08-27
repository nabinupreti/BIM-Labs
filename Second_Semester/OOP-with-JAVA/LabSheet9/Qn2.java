//Demonstrate an example of Generics method
package LabReport.LabSheet9;
class GenericMethodDemo {
    public <T> void display (T[] arr){
        System.out.println("\nDisplaying elements of array: ");
        for(T i:arr){
            System.out.print(i+"\t");
        }
    }
}
public class Qn2 {
    public static void main(String[] args) {
        GenericMethodDemo  g1 = new GenericMethodDemo();
        Integer[] i = {1,2,3,4,5};
        g1.display(i);
        Character[] c = {'a','e','i','o','u'};
        g1.display(c);
        
    }
    
}
