import java.util.*;
class Day18Question3 
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
    
    public static void sort(int arr[], int n)
    {
       int l = 0, mid = 0, h = n - 1;

        while (mid <= h) 
        {
            switch (arr[mid]) 
            {
                case 0:
                        int temp1 = arr[l];
                        arr[l] = arr[mid];
                        arr[mid] = temp1;
                        l++;
                        mid++;
                        break;

                case 1:
                        mid++;
                        break;

                case 2:
                        int temp2 = arr[mid];
                        arr[mid] = arr[h];
                        arr[h] = temp2;
                        h--;
                        break;
            }
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
            System.out.println("Enter 0, 1 or 2 only: ");
            arr[i] = sc.nextInt();
            if(arr[i] != 0 && arr[i] != 1 && arr[i] != 2)
            {
                System.out.println("Invalid choice");
                return;
            }
        }

        sort(arr, n);
        display(arr, n);
    }
}
