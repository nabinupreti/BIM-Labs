/*Write a program to create a file “nccs.txt” and write some content in it. After this read the content of file and display the result.
Use both byte stream and character stream. Also show different properties of file*/
package LabReport.LabSheet8;

import java.io.*;
import java.util.*;

public class Qn4 {
    public static void main(String[] args) {
        try {
            File f1 = new File("nccs.txt");
            if(!f1.exists()){
                f1.createNewFile();
            }   
            //using byte stream to write and read on file
            System.out.println("using byte stream to write and read on file");
            FileOutputStream fos = new FileOutputStream(f1);
            String str = "Hello NCCS BIM!!";
            byte[]b1 = str.getBytes();
            fos.write(b1);
            System.out.println("Data written in file!");
            FileInputStream fis = new FileInputStream(f1);
            int i;
            System.out.print("Data of file: ");
            while(( i = fis.read())!=-1){
                System.out.print((char)i);
            }
            fis.close();
            fos.close();
            
            //using character stream to write and read on file
            System.out.println("\nusing Character stream to write and read on file");
            FileWriter fw = new FileWriter(f1);
            fw.write("HELLO World!!");
            System.out.println("Data saved in file Successfully!");
            fw.close();
            FileReader fr = new FileReader(f1);
            int c;
            System.out.print("Data of file: ");
            while((c=fr.read())!=-1){
                System.out.print((char)c);
            }
            fr.close();
            // File properties
            System.out.println("\nSome Properties of file: ");
        File file = new File("nccs.txt");
        System.out.println("File name: " + file.getName());
        System.out.println("Absolute path: " + file.getAbsolutePath());
        System.out.println("Size: " + file.length() + " bytes");
        System.out.println("Can read: " + file.canRead());
        System.out.println("Can write: " + file.canWrite());
        System.out.println("Is hidden: " + file.isHidden());
        } catch (FileNotFoundException ex) {
            System.out.println(ex);
        } catch (IOException ex){
            System.out.println(ex);
        }
    }
}
