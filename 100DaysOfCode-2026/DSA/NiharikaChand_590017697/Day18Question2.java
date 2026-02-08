import java.util.*;
class Day18Question2 
{
    public static void display(int arr[], int n)
    {
        System.out.println("Sorted array: ");
        int i;
        for(i=0; i<n; i++)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    
    public static void insertionSort(int arr[], int n)
    {
       int i;
        for(i=1;i<n;i++)
        {
            int curr=arr[i];
            int prev=i-1;
            while(prev>=0 && arr[prev]>curr)
            {
                arr[prev+1]=arr[prev];
                prev--;
            }
            arr[prev+1]=curr;
        } 
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

        insertionSort(arr, n);
        display(arr, n);
    }
}
