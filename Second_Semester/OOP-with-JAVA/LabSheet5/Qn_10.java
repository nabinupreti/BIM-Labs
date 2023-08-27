/*Create a class EmployeeDetails having data member empId, empName, empGender, 
empAddress, and empPosition, constructor to set the details and display method to 
display the details. Create a subclass SalaryInfo that will inherit EmployeeDetails 
having own data member salary which will record salary per year, constructor to set 
the value of salary and method calcTax() that deduct the tax on salary and display the 
final salary. Tax rate is given as (if salary <= 400000 tax is 1%, salary between 400001 
to 800000 tax is 10% and salary > 800000 tax 20%). Now create the object of Salary 
info and demonstrate the scenario*/

package LabReport.LabSheet5;
class EmployeeDetails{
    private int empId;
    private String empName,empGender,empAddress,empPosition;
    public EmployeeDetails(int a,String b,String c,String d,String e){
        empId=a;
        empName=b;
        empGender=c;
        empAddress=d;
        empPosition=e;
    }
    public void display(){
        System.out.println("Employee Detsils: \nID: "+empId+"\nName: "+empName+"\nGender: "+empGender+"\nAddress: "+empAddress+"\nPosition: "+empPosition);
    }
}
class SalaryInfo extends EmployeeDetails{
    double salary,tax;
    public SalaryInfo(double salary,int a,String b,String c,String d,String e){
        super(a,b,c,d,e);
        this.salary=salary;
    }
    public void calcTax(){
    if(salary>800000){
        tax=0.2*salary;
    }
    else if(salary>40000){
        tax=0.1*salary;
    }
    else{
        tax=0.01*salary;
    }
            System.out.println("Salary: "+salary);
            System.out.println("Tax amount: "+tax);
            System.out.println("Net Salary: "+(salary-tax));
    
}
}
public class Qn_10 {
    public static void main(String[] args) {
        SalaryInfo s1 = new SalaryInfo(1000000,284,"Bikas","Male","Gorkha","CEO");
        s1.display();s1.calcTax();
    }
}
