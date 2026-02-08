import java.util.*;
public class DutchNationalFlag 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements (only 0, 1, or 2):");
        for (int i = 0; i < n; i++) 
        {
            arr[i] = scanner.nextInt();
        }
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high) 
        {
            if (arr[mid] == 0) 
            {
                int temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++;
                mid++;
            } else if (arr[mid] == 1)
            {
                mid++; 
            } else 
            { 
                int temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
            }
        }
        System.out.println("Sorted array:");
        for (int i = 0; i < n; i++) 
        {
            System.out.print(arr[i] + " ");
        }
    }
}
