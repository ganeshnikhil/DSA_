import java.util.*;
class Day19Question2 
{
     public static int peak(int arr[], int n)
    {
        int l= 0, h = n-1;
        while(l < h)
        {
            int mid = l + (h - l) / 2;
            boolean left = (mid == 0 || arr[mid] > arr[mid-1]);
            boolean right = (mid== n- 1 || arr[mid] > arr[mid+1]);

            if(left && right)
            {
                return mid;
            }
            if(mid > 0 && arr[mid] < arr[mid-1])
            {
                h = mid -1;
            }   
            else
            {
                l = mid + 1;
            }
        }
        return 1;
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
        System.out.println("\n" + peak(arr, n));
    }
}