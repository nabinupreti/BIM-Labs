/*Create a class Student having data member roll, name, address, faculty, grade(string). 
Create suitable constructor to set the details of student and methods findDivision() that calculates 
the division of student based on grade achieved and return the division( if grade=A+ then distinction, 
if grade=A then very good, grade B+ then first division, grade B then second division , grade C then 
pass in individual subject and if grade D the fail), display() method that display the student details
 and also display the division achieved by the student in main method. Now create the instance of two 
 students and demonstrate the above scenario.
 */
package LabReport.LabSheet4;
class Student {
    private int roll;
    private String name;
    private String address;
    private String faculty;
    private String grade;

    public Student(int a, String b, String c, String d, String e) {
        roll = a;
        name = b;
        address = c;
        faculty = d;
        grade = e;
    }

    public String findDivision() {
        if (grade == "A+") {
            return "Distinction";
        } else if (grade == "A") {
            return "very good";
        } else if (grade == "B+") {
            return "first Div";
        } else if (grade == "B") {
            return "Second Div";
        } else if (grade == "c") {
            return "pass in individual subject";
        } else {
            return "Fail";
        }
    }

    public void display() {
        System.out.println("Roll: " + roll + "\nName: " + name + "\nAddress: " + address + "\nFaculty: " + faculty
                + "\nGrade: " + grade);
    }

}

public class Qn5 {
    public static void main(String[] args) {
        Student s1 = new Student(10, "Nabin", "Panchkhal", "BIM", "A+");
        s1.display();
        String div = s1.findDivision();
        System.out.println("Grade is " + div);
    }
}
