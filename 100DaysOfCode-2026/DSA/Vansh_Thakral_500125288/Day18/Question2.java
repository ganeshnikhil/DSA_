public class Question2 {
    public static void insertionSort(int[] arr) {
        int n = arr.length;

        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;

            
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }

            arr[j + 1] = key;
        }
    }

    public static void printArray(int[] arr) {
        for (int value : arr)
            System.out.print(value + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr1 = {12, 11, 13, 5, 6};
        insertionSort(arr1);
        printArray(arr1); 

        int[] arr2 = {31, 41, 59, 26, 53};
        insertionSort(arr2);
        printArray(arr2); 

        int[] arr3 = {4, 2, 7, 1, 3};
        insertionSort(arr3);
        printArray(arr3); 
    }
}
