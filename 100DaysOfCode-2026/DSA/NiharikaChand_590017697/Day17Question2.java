import java.util.*;
class Day17Question2 
{
    public static int binarySearch(int arr[], int n, int item)
    {
        int b = 0, e = n-1, mid, p =-1;
        while(e >= b)
        {
            mid = (b+e)/2;
            if(arr[mid] == item)
            {
                p = mid;
                e = mid -1;  // checks if an earlier occurence of target element exists
            }
            else if(arr[mid] < item)
            b = mid + 1;
            else
            e = mid - 1;
        }
        return p;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int n = sc.nextInt();
        int arr[] = new int[n]; int i;
        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter target element: ");
        int tar = sc.nextInt();
        int result = binarySearch(arr, n, tar);
        if(result != -1)
        System.out.println("Output: " + result);
        else
        System.out.println("Output: -1");
    }
}

