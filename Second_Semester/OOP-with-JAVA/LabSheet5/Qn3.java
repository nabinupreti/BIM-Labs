//Provide example on how constructor of super class is called
package LabReport.LabSheet5;
class Parent1{
    private String name;
    public Parent1(String name){
        this.name=name;
    }
    public void display(){
        System.out.println("Name: "+name);
    }
}
class Child1 extends Parent1{
    String address;
    public Child1(String address,String name){
        super(name);  //calls super class constructor
        this.address=address;
    }
    public void displayAddress(){
    System.out.println("Addres: "+address);
}
}

public class Qn3 {
    public static void main(String[] args) {
        Child1 c1 = new Child1("Panchkhal", "Nabin Upreti");
        c1.display();
        c1.displayAddress();
    }
}
