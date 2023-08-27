/*
Write a program to write primitive type in file “emp.txt” and after that display the content of file*/
package LabReport.LabSheet8;

import java.io.*;

public class Qn7 {
    public static void main(String[] args) {
        File fp = new File("emp.txt");
        try{
            if(!fp.exists()){
                fp.createNewFile();
            }
            FileOutputStream fos = new FileOutputStream("emp.txt");
            DataOutputStream dos =  new DataOutputStream(fos);
            dos.writeInt(250);
            dos.writeFloat(23.20f);
            dos.writeDouble(89.6);
            dos.writeBoolean(true);
            dos.writeUTF("Hello!");
            dos.writeChar('A');
            fos.close();
            dos.close();
            FileInputStream fis = new FileInputStream("emp.txt");
            DataInputStream dis = new DataInputStream(fis);
            System.out.println("Int data is "+dis.readInt());
            System.out.println("Float data is "+dis.readFloat());
            System.out.println("Double data is "+dis.readDouble());
            System.out.println("Boolean data is "+dis.readBoolean());
            System.out.println("String data is "+dis.readUTF());
            System.out.println("Char data is "+dis.readChar());
        }catch(IOException e){
            System.out.println(e);
        }
    }
    
}
