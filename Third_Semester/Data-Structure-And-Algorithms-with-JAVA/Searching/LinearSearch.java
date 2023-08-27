package Searching;

import java.util.Scanner;

public class LinearSearch {

    public int linearSearch(int[] arr, int key) {

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LinearSearch search = new LinearSearch();
        int arr[] = { 1, 3, 5, 89, 56, 47, 33, 99 };
        System.out.println("Enter a key to search:");
        int key = sc.nextInt();
        sc.close();
        int res = search.linearSearch(arr, key);

        if(res == -1){
            System.out.println("Sorry! key not found");
        }else{
            System.out.println("Key found at index "+res);
        }
    }
}
