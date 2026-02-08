import java.util.*;
class Day15Question1
{
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

        Arrays.sort(arr);
        System.out.println("Sorted array: ");
        for(i=0; i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}