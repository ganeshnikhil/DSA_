import java.util.*;
public class FindLargestElement 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        if(n <= 0) 
        {
            System.out.println("Array must contain at least one element.");
            return;
        }
        int[] arr = new int[n];
        System.out.println("Enter " + n + " elements:");
        for(int i = 0; i < n; i++) 
        {
            arr[i] = scanner.nextInt();
        }
        int largest = findMax(arr);
        System.out.println("The largest element in the array is: " + largest);
    }
    public static int findMax(int[] arr) 
    {
        int max = arr[0]; 
        for(int i = 1; i < arr.length; i++) 
        {
            if(arr[i] > max) 
            {
                max = arr[i]; 
            }
        }
        return max;
    }
}
