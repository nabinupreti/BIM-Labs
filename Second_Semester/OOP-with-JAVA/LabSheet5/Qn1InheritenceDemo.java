/*Provide an example of single inheritance of your choice. (Two child class inheriting 
single parent class)*/
package LabReport.LabSheet5;
class Parent{
   private String name;
   private int age;
   public Parent(String name,int age){
        this.name=name;
        this.age=age;
    }
   public void display(){
       System.out.println("Name: "+name);
       System.out.println("Age: "+age);
   }
}
class Child1 extends Parent{
    private String address;
    public Child1(String address,String name,int age){
        super(name,age);
        this.address=address;
    }
    public void address(){
        System.out.println("Address: "+address);
} 
}
class Child2 extends Parent{
    private String gender;
    public Child2(String gender,String name,int age){
        super(name,age);
        this.gender=gender;
    }
    public void gender(){
        System.out.println("Gender: "+gender);
} 
}
public class Qn1InheritenceDemo {
    public static void main(String[] args) {
        Child1 c1 = new Child1("Panchkhal","Nabin",20);
        c1.display();
        c1.address();
        Child2 c2 = new Child2("Male","Bikas",21);
        c2.display();
        c2.gender();
    }
}
