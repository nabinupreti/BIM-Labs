public class SelectionSort {
    public void selectionSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            int sorted = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[sorted]) {
                    sorted = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[sorted];
            arr[sorted] = temp;
        }
    }

    public void display(int[] arr) {
        for (int a : arr) {
            System.out.print(a + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        SelectionSort sort = new SelectionSort();
        int arr[] = { 20, 3, 2, 9, 7, 5 };
        System.out.println("Before Sort:");
        sort.display(arr);
        System.out.println("After Sorting: ");
        sort.selectionSort(arr);
        sort.display(arr);
    }
}
