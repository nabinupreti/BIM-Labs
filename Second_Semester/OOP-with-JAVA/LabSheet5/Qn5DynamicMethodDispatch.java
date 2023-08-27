// Provide example on dynamic method dispatch
package LabReport.LabSheet5;
class Fruit{
    public void display(){
        System.out.println("This is Fruit class");
    }
}
class Apple extends Fruit{
    public void display(){
        super.display();
        System.out.println("This is Apple class");
    }
}
class Orange extends Fruit{
    public void display(){
        super.display();
        System.out.println("This is Orange class");
    }
}
public class Qn5DynamicMethodDispatch {
    public static void main(String[] args) {
        Apple a = new Apple();
        Orange o = new Orange();
        Fruit f;
        f=a;
        f.display();
        System.out.println("-----------------------------");
        f=o;
        f.display();
    }
}
