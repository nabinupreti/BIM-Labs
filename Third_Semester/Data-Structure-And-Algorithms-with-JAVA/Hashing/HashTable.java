/*Write a hash method to insert following data in hash table of size 10 data are 24,20, 37,84 ,50 ,47,67 and 74 */
public class HashTable {
    int size;
    int[] table;

    HashTable(int size) {
        this.size = size;
        this.table = new int[size];
    }

    private int hash(int key) {
        return key % size;
    }

    public void insert(int data) {
        int index = hash(data);

        // handle collisions using linear probing
        while (table[index] != 0) {
            index = (index + 1) % size;
        }

        table[index] = data;
    }

    public void display() {
        System.out.println("Displaying hash table:");
        int i = 0;
        for (int a : table) {
            System.out.println("Index " + i + ": " + a);
            i++;
        }
    }

    public static void main(String[] args) {
        final int size = 10;
        int array[] = { 24, 20, 37, 84, 50, 47, 67, 74 };
        HashTable table = new HashTable(size);

        for (int d : array) {
            table.insert(d);
        }

        table.display();

    }
}
