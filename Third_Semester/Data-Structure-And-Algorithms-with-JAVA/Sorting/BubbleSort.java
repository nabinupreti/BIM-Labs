public class BubbleSort {
    public void bubbleSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public void display(int[] arr) {
        for (int a : arr) {
            System.out.print(a + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {

        BubbleSort sort = new BubbleSort();
        int arr[] = { 3, 2, 9, 7, 5 };
        System.out.println("Before Sort:");
        sort.display(arr);
        System.out.println("After Sorting: ");
        sort.bubbleSort(arr);
        sort.display(arr);
    }
}