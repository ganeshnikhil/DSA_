import java.util.*;
class Day15Question3 
{

    public static void display(int arr[], int n)
    {
        int i; 
        for(i=0;i<n;i++)
        {
            System.out.print(arr[i] + "\t");
        }
        System.out.println();
    }

    public static void sort(int arr[], int n) 
    {
        int i, j, temp;
        for (i = 0; i < n - 1; i++) 
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1]) 
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String arg[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int n= sc.nextInt();
        int arr[]=new int[n]; int i;

        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            arr[i]=sc.nextInt();
        }

        sort(arr,n);
        System.out.println("Sorted array: ");
        display(arr, n);
    }
}
