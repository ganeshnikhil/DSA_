import java.util.*;
public class PeakElementFinder 
{
    public static int findPeakElement(int[] nums) 
    {
        int low = 0, high = nums.length - 1;
        while (low < high) 
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid + 1]) 
            {
                high = mid;
            } else 
            {
                low = mid + 1;
            }
        }
        return low;
    }
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) 
        {
            arr[i] = scanner.nextInt();
        }
        int peakIndex = findPeakElement(arr);
        System.out.println("A peak element is at index: " + peakIndex + " (value: " + arr[peakIndex] + ")");
    }
}
