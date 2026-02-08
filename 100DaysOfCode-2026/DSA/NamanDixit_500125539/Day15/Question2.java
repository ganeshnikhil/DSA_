import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class Question2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array length: ");
        int n = sc.nextInt();
        sc.nextLine();  // Consume the leftover newline

        String arr[] = new String[n];
        System.out.println("Enter array elements: ");

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextLine();
        }

  // Sort based on length
        Arrays.sort(arr, new Comparator<String>() {
            public int compare(String a, String b) {
                return Integer.compare(a.length(), b.length());
            }
        });
        
        System.out.println("Print sorted array: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
            if (i < arr.length - 1) System.out.print(", ");
        }
    }
}
