import java.util.*;
public class CountTargetFrequency 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter " + n + " elements:");
        for(int i = 0; i < n; i++) 
        {
            arr[i] = scanner.nextInt();
        }
        System.out.print("Enter the number to count: ");
        int target = scanner.nextInt();
        int count = countFrequency(arr, target);
        System.out.println("The number " + target + " appears " + count + " time(s) in the array.");
    }
    public static int countFrequency(int[] arr, int target) 
    {
        int count = 0;
        for(int num : arr) 
        {
            if(num == target) 
            {
                count++;
            }
        }
        return count;
    }
}
