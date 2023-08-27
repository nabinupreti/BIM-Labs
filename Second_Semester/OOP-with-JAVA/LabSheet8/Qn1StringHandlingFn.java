//1.	Show an example of any 10-string handling function.
package LabReport.LabSheet8;

public class Qn1StringHandlingFn {
    public static void main(String[] args) {
        String str = "I am studying BIM in NCCS.";
        //charAt()
        System.out.println("Character at index 6 is : "+str.charAt(6));
        //length()
        System.out.println("Length of str is : "+str.length());
        //subString
        System.out.println("String from index 0 to 13 : "+str.substring(0,13));
        //indexOf()
        System.out.println("Index of first occurring 'm' is : "+str.indexOf('m'));
        //toLowerCase()
        System.out.println("Lowercase of str is : "+str.toLowerCase());
        //toUpperCase
        System.out.println("Uppercase of str is : "+str.toUpperCase());
        //trim()-->removes leading and trailing white spaces
        System.out.println("Trim of str is : "+str.trim());
        //replace()
        System.out.println("After replacing BIM with BCA: "+str.replace("BIM", "BCA"));
        //concat()
        System.out.println("After concatenating : "+str.concat("Thank You!"));
        //startsWith()
        System.out.println("str starts with 'i' : "+str.startsWith("I am"));
        
        
    }
    
}
