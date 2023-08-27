/*Create a String array that holds name of 5 birds and
 print the name of such birds whose first letter start with ‘s */
package LabReport.LabSheet4;
public class Qn7 {
    public static void main(String[] args) {
        String bird[] = { "Crow", "Peacock", "Dove", "Sparrow", "Angel", "Ostrich", "Alice", "Turkey", "Hawk",
                " Bald eagle" };
        System.out.println("Birds name with a are: ");
        for (int i = 0; i < bird.length; i++) {
            if (bird[i].charAt(0) == 'a' || bird[i].charAt(0) == 'A') {
                System.out.println(bird[i]);
            }

        }
    }

}
