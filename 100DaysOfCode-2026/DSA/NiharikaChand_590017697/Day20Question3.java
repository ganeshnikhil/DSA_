import java.util.*;
class Day20Question3 
{
    public static int KthLargest(int arr[], int k) 
    {
        int pos = arr.length - k;
        int l = 0, h = arr.length - 1;
        while (l < h) 
        {
            int pivotIdx = partition(arr, l, h);
            if (pivotIdx < pos) 
            {
                l = pivotIdx + 1;
            } 
            else if (pivotIdx > pos) 
            {
                h = pivotIdx - 1;
            } 
            else 
            {
                break;
            }
        }
        return arr[pos];
    }

    public static int partition(int arr[], int left, int right)
    {
        int piv = arr[left];
        int i = left, j = right;
        while (i < j) 
        {
            while (i < right && arr[i] <= piv) 
            i++;
            while (j > left && arr[j] > piv) 
            j--;

            if (i < j) 
            {
                swapNum(arr, i, j);
            }
        }

        swapNum(arr, left, j);
        return j;
    }

    public static void swapNum(int arr[], int x, int y) 
    {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int nums[] = new int[n]; int i;
        for (i = 0; i < n; i++) 
        {
            System.out.println("Enter an element: ");
            nums[i] = sc.nextInt();
        }

        System.out.print("Enter k: ");
        int k = sc.nextInt();

        int result = KthLargest(nums, k);
        System.out.println("The " + k + "th largest element is: " + result);
    }    
}
