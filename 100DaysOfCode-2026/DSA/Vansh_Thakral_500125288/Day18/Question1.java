public class Question1 {
    public static void selectionSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            int minIdx = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
            }

            int temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
        }
    }

    public static void printArray(int[] arr) {
        for (int value : arr)
            System.out.print(value + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr1 = {29, 10, 14, 37, 13};
        selectionSort(arr1);
        printArray(arr1);

        int[] arr2 = {64, 25, 12, 22, 11};
        selectionSort(arr2);
        printArray(arr2); 

        int[] arr3 = {5, 3, 8, 1, 6};
        selectionSort(arr3);
        printArray(arr3); 
    }
}

