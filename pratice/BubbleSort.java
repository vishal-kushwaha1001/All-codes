
public class BubbleSort {

    public static void sort(int arr[]) {

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j <= arr.length - 1; j++) {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j] = temp;

                }
            }

        }       
    }



    public static void print(int arr[]){
        for(int i = 0 ; i<arr.length; i++){
            System.out.println(arr[i]);
        }
    }

    public static void main(String[] args) {
        int arr[] = {2, 4, 5, 3, 6, 7};
        // sort(arr);
        // print(arr);
        System.out.println(arr.length);
    }
}
