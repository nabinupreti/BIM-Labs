/*
Create a class Empolyee with data member id(int), name (String), gender (String), course (String). A class have one constructor to
initialize the instance variable and method display () that prints the details of employee. Now, create a object of Employee and write 
it into a file “employee.txt” after that access the object from employee.txt and access method of a class*/
package LabReport.LabSheet8;

import java.io.*;

class Employee implements Serializable{
    int id;
    String name;
    String gender;
    String course;
    public Employee(int id,String name,String gender,String course){
        this.id=id;
        this.name=name;
        this.gender=gender;
        this.course=course;
    }
    public void display(){
        System.out.println("ID: "+id);
        System.out.println("Name: "+name);
        System.out.println("Gender: "+gender);
        System.out.println("Course: "+course);
    }
}
public class Qn8 {
    public static void main(String[] args) {
        Employee e1 = new Employee(123,"Nabin","Male","BIM");
        try{
            File fp = new File("employee.txt");
            while(!fp.exists()){
                fp.createNewFile();
            }
            //saving object in file
            FileOutputStream fos = new FileOutputStream("employee.txt");
            ObjectOutputStream oos = new ObjectOutputStream(fos);
            oos.writeObject(e1);
            fos.close();
            oos.close();
            //extracting object from file
            FileInputStream fis = new FileInputStream("employee.txt");
            ObjectInputStream ois = new ObjectInputStream(fis);
            Employee e2 =(Employee) ois.readObject();
            e2.display();
            fis.close();
            ois.close();
            
        }catch(IOException e){
            System.out.println(e);
        }catch(ClassNotFoundException e){
            System.out.println(e);
        }
    }
  
}
