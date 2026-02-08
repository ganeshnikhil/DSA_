import java.util.*;
public class RotatedArraySearch 
{
    public static int search(int[] nums, int target) 
    {
        int low = 0, high = nums.length - 1;

        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) 
            {
                return mid;
            }
            if (nums[low] <= nums[mid]) 
            {
                if (nums[low] <= target && target < nums[mid]) 
                {
                    high = mid - 1;
                } else 
                {
                    low = mid + 1; 
                }
            }
            else 
            {
                if (nums[mid] < target && target <= nums[high]) 
                {
                    low = mid + 1; 
                } else 
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the rotated sorted array:");
        for (int i = 0; i < n; i++) 
        {
            arr[i] = scanner.nextInt();
        }
        System.out.print("Enter the target value to search: ");
        int target = scanner.nextInt();
        int result = search(arr, target);
        if (result != -1) 
        {
            System.out.println("Target found at index: " + result);
        } else 
        {
            System.out.println("Target not found in the array.");
        }
    }
}
