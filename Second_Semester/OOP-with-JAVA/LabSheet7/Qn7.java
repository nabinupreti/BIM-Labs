/*
Write a program to create a class name Person with attribute name and age with method setName() to set the name and setAge() 
to set the age of a person. Throw your own exception when the user gives age value rather than between 1 to 100.*/
package LabReport.LabSheet7;
import java.util.Scanner;
class AgeException extends Exception{
    @Override
    public String toString(){
        return "Please enter age between 1-100";
    }
}

class Person {
    Scanner sc = new Scanner(System.in);
    String name;
    int age;
    public void SetName(){
        System.out.print("Enter Name: ");
        name = sc.next();
        System.out.println("Your name is "+name);
    }
    public void setAge() throws AgeException{
        System.out.print("Enter Age: ");
        age = sc.nextInt();
        if(age < 1 || age > 100){
            throw new AgeException();
        }
        else{
            System.out.println("Your Age is "+age);
        }
    }
}
public class Qn7 {
    public static void main(String[] args) {
        try {
            Person p1 = new Person();
            p1.SetName();
            p1.setAge();
        } catch (AgeException ex) {
            System.out.println(ex);
        }
    }
}
