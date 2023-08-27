/*
Create a class Calculate with two instance variable x and y both in int with one constructor to initialize the instance variable and
methods int sum() that returns the sum of x and y, void mul () that prints the multiplication of x and y, void findPrime() that prints
the prime no. between x to y. Now, write the object of calculate in file calc.txt, after that read a object from that file and access 
the method of class. */
package LabReport.LabSheet8;

import java.io.*;

class Calculate implements Serializable{
    int x;
    int y;
    public Calculate(int x,int y){
        this.x=x;
        this.y=y;
    }
    public int sum(){
        return x+y;
    }
    public void mul(){
        System.out.println("Product of "+x+" and "+y+" is "+(x*y));
    }
    public void findPrime(){
        System.out.println("Prime number between "+x+" and "+y+" are: ");
        int flag = 0;
        for(int i = x;i<=y;i++){
            if(i==1){
                continue;
            }
            for(int j = 2;j<i;j++){
                if(i%j==0){
                    flag++;
                    break;
                }
            }
            if(flag==0){
                System.out.print(i+", ");
            }
            flag=0;
        }
    }
}
public class Qn9 {
    public static void main(String[] args) {
         Calculate c1 = new Calculate(1,50);
        try{
            File fp = new File("calc.txt");
            while(!fp.exists()){
                fp.createNewFile();
            }
            //saving object in file
            FileOutputStream fos = new FileOutputStream("calc.txt");
            ObjectOutputStream oos = new ObjectOutputStream(fos);
            oos.writeObject(c1);
            fos.close();
            oos.close();
            //extracting object from file
            FileInputStream fis = new FileInputStream("calc.txt");
            ObjectInputStream ois = new ObjectInputStream(fis);
            Calculate c2 =(Calculate) ois.readObject();
            System.out.println("Sum is "+c2.sum());
            c2.mul();
            c2.findPrime();
            fis.close();
            ois.close();
            
        }catch(IOException e){
            System.out.println(e);
        }catch(ClassNotFoundException e){
            System.out.println(e);
        }
    }
    
}
