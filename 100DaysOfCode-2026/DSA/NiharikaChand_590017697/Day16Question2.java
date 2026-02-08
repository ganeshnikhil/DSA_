import java.util.*;
class Day16Question2 
{

    public static int frequency(int arr[], int s)
    {
        int n = arr.length, i, c=0;
        for(i=0; i<n; i++)
        {
            if(arr[i] == s)
            {
                c++;
            }
        }
        return c;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int arr[] = {1,2,3,2,2,4};

        System.out.println("Enter the target element: ");
        int s = sc.nextInt();
        int result = frequency(arr, s);
        if(result == 0)
        System.out.println(s + " does not exist in the array");
        else
        System.out.println("Frequency of " + s + " is " + result);
    }
}
