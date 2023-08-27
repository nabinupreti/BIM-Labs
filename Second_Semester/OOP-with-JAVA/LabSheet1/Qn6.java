class Qn6 {
    public static void main(String[] args) {

        int n1 = 12, n2 = -25;

        // bitwise OR between 12 and -25
        int r1 = n1 | n2;
        System.out.println("Bitwise OR of " + n1 + " and " + n2 + " is " + r1);
        int r2 = n1 & n2;
        System.out.println("Bitwise AND is " + r2);
        int r3 = n1 ^ n2;
        System.out.println("Bitwise XOR is " + r3);
        int r4 = ~n1;
        System.out.println("Bitwise Complement of " + n1 + " is " + r4);
    }
}