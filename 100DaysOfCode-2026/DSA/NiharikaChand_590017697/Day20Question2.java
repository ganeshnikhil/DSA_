import java.util.*;
class Day20Question2 
{
    public static void display(int result[])
    {
        int i, n = result.length;
        System.out.println("Final sorted array:");
        for (i = 0; i < n; i++)
        {
            System.out.print(result[i] + " ");
        }
    }

    public static int[] merge(int arr1[], int arr2[], int n1, int n2)
    {
        int result[] = new int[n1 + n2];
        int i = 0, j = 0, k = 0;
        while (i < n1 && j < n2)
        {
            if (arr1[i] <= arr2[j])
            {
                result[k++] = arr1[i++];
            }
            else
            {
                result[k++] = arr2[j++];
            }
        }

        while (i < n1)
        {
            result[k++] = arr1[i++];
        }

        while (j < n2)
        {
            result[k++] = arr2[j++];
        }

        return result;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of 1st sorted array: ");
        int n1 = sc.nextInt();
        int arr1[] = new int[n1];
        System.out.println("Enter elements of 1st sorted array:");
        int i;
        for (i = 0; i < n1; i++)
        {
            arr1[i] = sc.nextInt();
        }

        System.out.print("Enter size of 2nd sorted array: ");
        int n2 = sc.nextInt();
        int arr2[] = new int[n2];
        System.out.println("Enter elements of 2nd sorted array:");
        for (i = 0; i < n2; i++)
        {
            arr2[i] = sc.nextInt();
        }

        int result[] = merge(arr1, arr2, n1, n2);
        display(result);        
    }
}
