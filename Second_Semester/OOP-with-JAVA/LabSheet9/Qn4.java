package LabReport.LabSheet9;

//Demonstrate and example of wild card in generics (Upper Bound type, Lower bound type and unbound type).

import java.util.*;

class UpperBound{
    public void displayUpper (ArrayList <? extends Number>a1){//accept all from Numbers
        System.out.println("Displaying Upper Bound ArrayList:");
        System.out.println(a1);
    }
}
class LowerBound{
    public void displayLower (List <? super Float> l1){//accept only float and its parent class Numbers
        System.out.println("Displaying Lower Bound list :");
        System.out.println(l1);
    }
}
class UnboundedDemo{
    public void displayUndounded (ArrayList <?> s1){//accept any objects
        System.out.println("Displaying Unbounded list: ");
        System.out.println(s1);
    }
}
public class Qn4 {
    public static void main(String[] args) {
        UpperBound uw = new UpperBound();
        ArrayList <Integer> a1 = new ArrayList();
        a1.add(50);
        a1.add(60);
        a1.add(70);
        uw.displayUpper(a1);
        
        LowerBound lw = new LowerBound();
        List <Float> l1 = new ArrayList();
        l1.add(5.6f);
        l1.add(5.5f);
        lw.displayLower(l1);
        
        UnboundedDemo ub = new UnboundedDemo();
        ArrayList <String> l2 = new ArrayList();
        l2.add("Nabin");
        l2.add("Bikas");
        ub.displayUndounded(l2);
        
    }
}
