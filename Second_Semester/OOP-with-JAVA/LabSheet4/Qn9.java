package LabReport.LabSheet4;

/*Create an abstract class FMachine having methods getData() and putData().
 Derive a class Airplane having instance variable code, name, capacity and
 methods getData() and putData() that overrides method of abstract class to 
 read and display the result. Create some instances of Airplane and call 
 the required methods */
abstract class FMachine {
    abstract void getData(String a, String b, String c);
    abstract void putData();
}

class Airplane extends FMachine {
    private String code, name, capacity;

    @Override
   public void getData(String a, String b, String c) {
        code = a;
        name = b;
        capacity = c;
    }

    @Override
    public void putData() {
        System.out.println("Code is " + code);
        System.out.println("Name is " + name + "\nCapacity is " + capacity);
    }
}

public class Qn9 {
    public static void main(String[] args) {
        Airplane a1 = new Airplane();
        a1.getData("A101", "Boeing 747", "400");
        a1.putData();
    }
}
