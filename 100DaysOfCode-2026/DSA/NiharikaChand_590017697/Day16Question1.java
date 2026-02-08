import java.util.*;
class Day16Question1 
{

    public static int search(int arr[], int n, int s)
    {
        int i, p = -1;
        for(i=0; i<n; i++)
        {
            if(arr[i] == s)
            {
                p = i;
                break;
            }
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

        System.out.println("Enter element to be searched: ");
        int s = sc.nextInt();
        int result = search(arr, n, s);
        System.out.println(result);
    }
}
