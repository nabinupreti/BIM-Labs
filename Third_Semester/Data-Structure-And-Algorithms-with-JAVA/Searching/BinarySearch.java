import java.util.*;

public class BinarySearch {
    public int binarySearch(int arr[], int key) {
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == key) {
                return mid;
            }

            if (key > arr[mid]) { // if key is greater, ignore the left half
                low = mid + 1;
            } else {
                high = mid - 1;
            }

        }
        return -1;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BinarySearch search = new BinarySearch();

        // Array should be Sorted for binary search
        int arr[] = { 1, 3, 5, 8, 56, 76, 82, 99 };
        System.out.println("Enter a key to search:");
        int key = sc.nextInt();

        int res = search.binarySearch(arr, key);

        if (res == -1) {
            System.out.println("Sorry! key not found");
        } else {
            System.out.println("Key found at index " + res);
        }
    }

}
