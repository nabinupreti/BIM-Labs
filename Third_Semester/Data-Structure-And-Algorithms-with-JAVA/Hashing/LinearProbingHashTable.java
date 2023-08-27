public class LinearProbingHashTable {
    private int[] table;
    private int size;

    public LinearProbingHashTable(int capacity) {
        table = new int[capacity];
        size = 0;
    }

    public int hash(int key) {
        return key % table.length;
    }

    public void insert(int key) {
        if (size == table.length) {
            System.out.println("Hash table is full. Cannot insert " + key);
            return;
        }

        int hashValue = hash(key);
        while (table[hashValue] != 0) {
            // Linear probing: move to the next slot
            hashValue = (hashValue + 1) % table.length;
        }
        table[hashValue] = key;
        size++;
        System.out.println(key + " inserted ");
    }

    public void search(int key) {
        int hashValue = hash(key);
        int originalHash = hashValue;

        while (table[hashValue] != 0) {
            if (table[hashValue] == key) {
                System.out.println(key + " found in hash table at index " + hashValue);
                return;
            }
            // Linear probing: move to the next slot
            hashValue = (hashValue + 1) % table.length;

            // If we've gone through the entire table and didn't find the key, break the
            // loop
            if (hashValue == originalHash) {
                break;
            }
        }

        System.out.println(key + " doesnot found in hash table");
    }

    public void display() {
        System.out.print("Hash Table: ");
        for (int value : table) {
            System.out.print(value + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        LinearProbingHashTable hashTable = new LinearProbingHashTable(10);

        hashTable.insert(10);
        hashTable.insert(22);
        hashTable.insert(42);
        hashTable.insert(30);
        hashTable.insert(4);

        hashTable.display();

        hashTable.search(30);
        hashTable.search(5);
    }
}
