/*
write a program to take emp_id, emp_name, emp_address from user and then store it in file called “Emp.txt”. after this copy the content
of “Emp.txt” to “DB.txt”. Also display the content of “DB.txt” file. */
package LabReport.LabSheet8;

import java.io.*;
import java.util.*;

public class Qn5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Employee id: ");
        String emp_id = sc.next();
        System.out.print("Enter Employee name: ");
        String emp_name = sc.next();
        System.out.print("Enter Employee Adderss: ");
        String emp_address = sc.next();
        File fp = new File("Emp.txt");
        File fp1 = new File("DB.txt");
        try{
            if(!fp.exists()){
                fp.createNewFile();
            }
            if(!fp1.exists()){
                fp1.createNewFile();
            }
            //writing emp details in Emp.txt
            FileWriter fw = new FileWriter("Emp.txt");
            fw.write("ID: "+emp_id);
            fw.write("\nName: "+emp_name);
            fw.write("\nAddress: "+emp_address);
            System.out.println("--Stored employee detail in file Emp.txt");
            fw.close();
            //copying data of Emp.txt to DB.txt
            FileReader fr = new FileReader("Emp.txt");
            FileWriter fw1 = new FileWriter("DB.txt");
            int i;
            while((i=fr.read())!=-1){
                fw1.write(i);
            }
            System.out.println("--Content of Emp.txt copied to DB.txt");
            fr.close();
            fw1.close();
            //Displaying content of DB.txt
            System.out.println("Displaying content of DB.txt: ");
            FileReader fr1 = new FileReader("DB.txt");
            while((i=fr1.read())!=-1){
                System.out.print((char)i);
            }
            fr1.close();
            
        }catch(IOException e){
            System.out.println(e);
        }
    }
    
}
