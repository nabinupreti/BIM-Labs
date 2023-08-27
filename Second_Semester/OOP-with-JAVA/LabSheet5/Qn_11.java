/*
Create a class BankAccount that have data member accNo, Name, address, phone, 
gender, constructor to set the bank details and showDetails() method to display the 
account details. Create subclass SavingAccount which inherits BankAccount and have 
data member currentAmount and month, constructor to set the data member, 
methods calcTotal() that update the currentAmount by adding the bonus amount and 
return the result. (if saving month is below 3 mnth bonus is 2%, if saving month is 
between 3 to 6 month bonus is 5%, if saving month is between 6 to 12 month bonus 
is 8% and if saving month is above 1 year bonus is 11.03%). Now create the object of 
SavingAccount and demonstrate the scenario.

 */
package LabReport.LabSheet5;
class BankAccount{
    private String accNo,name,address,phone,gender;
    public BankAccount(String accNo, String name,String address,String phone,String gender){
        this.accNo=accNo;
        this.name=name;
        this.address=address;
        this.gender=gender;
        this.phone=phone;
    }
    public void showDetails(){
            System.out.println("Acc No.: "+accNo);
            System.out.println("Name: "+name+"\nAddress: "+address+"\nPhone: "+phone+"\nGender: "+gender);
}
}
class SavingAccount extends BankAccount{
    private double currentAmount,bonus;
    private int month;
    public SavingAccount(double currentAmount,int month,String accNo, String name,String address,String phone,String gender){
        super(accNo,name,address,phone,gender);
        this.currentAmount=currentAmount;
        this.month=month;
    }
    public double calcTotal(){
        if(month<3){
            bonus=(2.0/100)*currentAmount;
        }
        else if(month<6){
            bonus=(5.0/100)*currentAmount;
        }
        else if(month<=12){
            bonus=(8.0/100)*currentAmount;
        }
        else{
            bonus=(11.03/100)*currentAmount;
        }
        return (currentAmount+bonus);
}   
}
public class Qn_11 {
    public static void main(String[] args) {
        SavingAccount s1 = new SavingAccount(200000.3,5,"1170172359300012","Nabin Upreti","Panchkhal","9812407242","Male");
        s1.showDetails();
        System.out.println("Total amount : "+s1.calcTotal());
    }
}
