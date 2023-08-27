/*Create a class Student having data member roll (int), name (string), address (string), gender 
(string), faculty (string) and method setData() to set the value of data member and display 
method that display the data of student. Now create two object of Student and invoke set and 
display method */
package LabSheet3;

class Student {
    private int roll;
    private String name;
    private String address;
    private String gender;
    private String faculty;

    public void setData(int roll, String name, String address, String gender, String faculty) {
        this.roll = roll;
        this.name = name;
        this.gender = gender;
        this.faculty = faculty;
        this.address = address;
    }

    public void display() {
        System.out.println("Roll: " + roll + "\nName: " + name + "\nAddress: " + address);
        System.out.println("Gender: " + gender + "\nFaculty: " + faculty);
    }
}

public class Qn1 {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.setData(1, "Hari", "Balaju", "Male", "BIM");
        s1.display();
        Student s2 = new Student();
        s2.setData(2, "Bikas", "Raniban", "Male", "BIM");
        s2.display();
    }

}
