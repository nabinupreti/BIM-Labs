public class InsertionSort {
    public void insertionSort(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && key < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    public void display(int[] arr) {
        for (int a : arr) {
            System.out.print(a + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        InsertionSort sort = new InsertionSort();
        int arr[] = { 3, 2, 9, 7, 5 };
        System.out.println("Before Sort:");
        sort.display(arr);
        System.out.println("After Sorting: ");
        sort.insertionSort(arr);
        sort.display(arr);
    }
}
