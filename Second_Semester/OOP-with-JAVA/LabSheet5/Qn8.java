/*Create a class ExamDept which hold the details of student like roll, name, address and 
faculty and also have methods to set the values of student and display the details of 
student. Create a subclass Result that inherits Exam dept which have data member to 
hold marks of five subject and method setMarks() to set the marks of 5 subject, 
calcPercentage() that calculate the total marks, percentage and division achieved by 
students and display the achieved results. Now create the object of Result and 
demonstrate the above scenari*/
package LabReport.LabSheet5;
import java.util.*;
class ExamDept{
    private int roll;
    private String name,address,faculty;
    public void setData(int roll,String name,String address,String faculty){
        this.roll=roll;
        this.name=name;
        this.address=address;
        this.faculty=faculty;
    }
    public void display(){
        System.out.println("Roll: "+roll+"\nName: "+name+"\nAddress: "+address+"\nFaculty: "+faculty);
    }
}
class Result extends ExamDept{
    Scanner sc = new Scanner(System.in);
    int[]s=new int[5];
    public void setMarks(){
        System.out.println("Enter marks of 5 subject: ");
        for(int i=0;i<5;i++){
            s[i]=sc.nextInt();
        }
    }
    public void calcPercentage(){
        int total=0;
        char grade;
        double percentage;
        for(int i=0;i<5;i++){
            total+=s[i];
        }
        percentage=total/5.0;
        if(percentage >= 80){
            grade = 'A';
        }
        else if(percentage>70){
            grade = 'B';
        }
        else if(percentage>60){
            grade = 'C';
        }
        else{
            grade = 'D';
        }
        System.out.println("Total Marks: "+total);
        System.out.println("Percentage: "+percentage);
        System.out.println("Grade: "+grade);
    }
}
public class Qn8 {
    public static void main(String[] args) {
        Result r1 = new Result();
        r1.setMarks();
        r1.setData(12,"Hari","Syanga","BIM");
        r1.display();
        r1.calcPercentage();
    }
}
