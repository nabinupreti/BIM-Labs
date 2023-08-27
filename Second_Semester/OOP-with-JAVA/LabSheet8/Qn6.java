/*
Write a program to create a file “tu.txt” and write some text on it. Now read a content from “tu.text”, display them and count the 
number of characters and print it*/
package LabReport.LabSheet8;

import java.io.*;

public class Qn6 {
    public static void main(String[] args) {
        try{

            File fp = new File("tu.txt");
            if(!fp.exists()){
                fp.createNewFile();
            }
            FileOutputStream fos = new FileOutputStream("tu.txt");
            String str = "Hello TU students!";
            byte[] b = str.getBytes();
            fos.write(b);
            fos.close();
            FileInputStream fis = new FileInputStream("tu.txt");
            int i;
            int count=0;
            System.out.println("Content of File: ");
            while((i=fis.read())!=-1){
                System.out.print((char)i);
                count++;
            }
            fis.close();
            System.out.println("\nNo of character in file: "+count);
        }catch(IOException e){
            System.out.println(e);
        }
    }
}
