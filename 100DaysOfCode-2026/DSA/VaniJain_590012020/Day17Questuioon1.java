import java.util.*;
public class BinarySearchInMain 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) 
        {
            arr[i] = scanner.nextInt();
        }
        Arrays.sort(arr);
        System.out.print("Enter the target element to search: ");
        int target = scanner.nextInt();
        int left = 0, right = n - 1;
        int result = -1;
        while (left <= right) 
        {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) 
            {
                result = mid;
                break;
            } else if (arr[mid] < target) 
            {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if (result == -1) 
        {
            System.out.println("Element not found in the array.");
        } else 
        {
            System.out.println("Element found at index: " + result);
        }
    }
}
