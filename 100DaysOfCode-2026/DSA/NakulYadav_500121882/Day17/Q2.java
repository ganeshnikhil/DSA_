public class Q2{
      public static void main(String[] args) {
        int[] arr1 = {1, 2, 2, 2, 3, 4};
        System.out.println(firstOccurrence(arr1, 2));
    }
    public static int firstOccurrence(int[] arr, int target) {
        int low = 0, high = arr.length - 1;
        int result = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == target) {
                result = mid;
                high = mid - 1;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return result;
    }
}

