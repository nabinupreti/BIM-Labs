//Demonstrate an example of Bound type in generics
package LabReport.LabSheet9;
class TwoWheeler{
    public void display(){
        System.out.println("This is twoWheeler class");
    }
}

class Bike extends TwoWheeler{
    public void display(){
        System.out.println("This is Bike class");
    }
}

class BoundClass <T extends TwoWheeler>{
    T obj;//T will accept TwoWxeeler and it subClass
    public BoundClass(T obj){
        this.obj = obj;
    }
    public void displayClasses(){
        obj.display();//based on object passed it will call methods
    }
}
public class Qn3 {
    public static void main(String[] args) {
        TwoWheeler tw = new TwoWheeler();
        BoundClass <TwoWheeler> bc1= new BoundClass ( tw);
        bc1.displayClasses();
        
        Bike b1 = new Bike();
        BoundClass <Bike> bc2 = new BoundClass (b1);
        bc2.displayClasses();
    }
}
