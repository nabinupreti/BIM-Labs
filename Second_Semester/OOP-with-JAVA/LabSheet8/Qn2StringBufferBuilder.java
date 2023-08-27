/*
2.	Show an example of any 7 inbuilt function of StringBuilder or StringBuffer classes. 
*/
package LabReport.LabSheet8;

public class Qn2StringBufferBuilder {
    public static void main(String[] args) {
        StringBuilder str = new StringBuilder("Hello NCCS ");
        System.out.println("Original String: "+str);
        //capacity()
        System.out.println("Capacity of str: "+str.capacity());
        //append()
        System.out.println("after appending: "+str.append("How are you?"));
        //insert()
        System.out.println("After inserting: "+str.insert(11, "College "));
        //replace()
        System.out.println("After replacing: "+str.replace(0, 5, "Hii!"));
        //delete()
        System.out.println("After deleting: "+str.delete(0, 18));
        //reverse()
        System.out.println("After reversing: "+str.reverse());
    }
    
}
