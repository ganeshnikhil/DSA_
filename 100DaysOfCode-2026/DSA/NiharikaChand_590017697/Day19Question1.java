import java.util.*;
class Day19Question1 
{
    public static int search(int arr[], int n, int t) 
    {
        int l = 0, h = n - 1;

        while (l <= h) 
        {
            int mid = l + (h - l) / 2;
            if (arr[mid] == t)
                return mid;

            if (arr[l] <= arr[mid]) 
            {
                if (t >= arr[l] && t < arr[mid]) 
                {
                    h = mid - 1;  
                }
                else 
                {
                    l = mid + 1;   
                }
            }
            else 
            {
                if (t > arr[mid] && t <= arr[h]) 
                {
                    l = mid + 1;   
                } 
                else 
                {
                    h = mid - 1;  
                }
            }
        }
        return -1;
    }

    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        int i;

        for (i = 0; i < n; i++)
        {
            System.out.println("Enter an element: ");
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter target value: ");
        int tar = sc.nextInt();

        int result = search(arr, n, tar);
        if (result != -1) 
        {
            System.out.println("target found at index: " + result);
        } 
        else 
        {
            System.out.println("\n" + result);
        }
    }
}
