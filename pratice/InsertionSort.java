import java.util.Scanner;

public class InsertionSort {
    
public static void sortArr(int arr[]){
  int n = arr.length;
    for(int i = 1 ; i <= n-1 ;i++){
       int curr = arr[i];
    }

}

  public static void printArr(int arr[]){
        for(int i = 0 ; i<arr.length; i++){
            System.out.println(arr[i]);
        }
    }

public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("input size of Array :");
        int size = sc.nextInt();
        System.out.print("Input Array : ");
        int[] arr = new int[size];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("original Array : ");
        printArr(arr);
        System.out.println("Sorted Array :");
        sortArr(arr);
        printArr(arr);
        sc.close();
    }

}
