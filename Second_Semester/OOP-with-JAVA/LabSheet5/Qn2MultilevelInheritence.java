/*2. Provide an example of multi-level inheritance of your choice.
*/
package LabReport.LabSheet5;
class GrandParent{
    private String name;
    public GrandParent(String name){
        this.name=name;
    }
    public void displayName(){
        System.out.println("Name: "+name);
    }
}
class Parent extends GrandParent{
    private int age;
    public Parent(String name,int age){
        super(name);
        this.age=age;
    }
    public void displayAge(){
        System.out.println("Age: "+age);
    }
}
class Child extends Parent{
    String address;
    public Child(String address,String name,int age){
        super(name,age);  
        this.address=address;
    }
    public void displayAddress(){
    System.out.println("Addres: "+address);
}
}
        
public class Qn2MultilevelInheritence {
    public static void main(String[] args) {
        Child c1 = new Child("Panchkhal", "Nabin Upreti",19);
        c1.displayName();
        c1.displayAge();
        c1.displayAddress();
    }
}
