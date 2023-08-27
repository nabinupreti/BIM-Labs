package recursion;

public class TowerOfHanoiUsingRecursion {
    void toh(int n, char src, char aux, char des) {
        if (n == 1) {
            System.out.println("moving disc " + n + " from " + src + " to " + des);
            return;
        }
        toh(n - 1, src, des, aux);
        System.out.println("moving disc " + n + " from " + src + " to " + des);
        toh(n - 1, aux, src, des);
    }

    public static void main(String[] args) {
        TowerOfHanoiUsingRecursion t1 = new TowerOfHanoiUsingRecursion();
        int noOfdisc = 3;
        t1.toh(noOfdisc, 'A', 'B', 'C');

    }
}
