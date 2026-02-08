import java.util.*;
class Day16Question3 
{

    public static int findMax(int arr[], int n)
    {
        int max = arr[0], i;
        for(i=1; i<n; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
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

        int result = findMax(arr, n);
        System.out.println("\n Maximum element: " + result);
    }
}
