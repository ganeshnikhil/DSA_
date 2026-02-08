import java.util.*;
class Day18Question1 
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
    
    public static void selectionSort(int arr[], int n)
    {
        int s,i,j;
        for(i=0;i<n;i++)
        {
            s=i;
            for(j=i+1;j<n;j++)
            {
                if(arr[s]>arr[j])
                {
                    s=j;
                }
            }
            // swap
            int temp = arr[i];
            arr[i] = arr[s];
            arr[s] = temp;
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

        selectionSort(arr, n);
        display(arr, n);
    }
}
