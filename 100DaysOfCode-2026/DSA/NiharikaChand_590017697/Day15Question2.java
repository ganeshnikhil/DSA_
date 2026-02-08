import java.util.*;
class Day15Question2 
{
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of strings: ");
        int n = sc.nextInt(); int i, j;
        sc.nextLine(); 
        String arr[] = new String[n];

        for (i = 0; i < n; i++) 
        {
            System.out.println("Enter a strings: ");
            arr[i] = sc.nextLine();
        }

        for (i = 0; i < n - 1; i++) 
        {
            for (j = 0; j < n - i - 1; j++) 
            {
                if (arr[j].length() > arr[j + 1].length()) 
                {
                    // Swap arr[j] and arr[j + 1]
                    String temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        System.out.println("Sorted strings by length: ");
        for (i = 0; i < n; i++) 
        { 
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

