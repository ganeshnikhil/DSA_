import java.util.*;

public class Day_17_Question_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of elements (sorted):");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter " + n + " sorted integers:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();

        System.out.println("Enter the target to search:");
        int target = sc.nextInt();

        int low = 0, high = n - 1, mid, result = -1;

        while (low <= high) {
            mid = (low + high) / 2;

            if (arr[mid] == target) {
                result = mid;
                break;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        System.out.println("Output: " + result);
    }
}
