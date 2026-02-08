
import java.util.*;

class Question2 {

    int FirstOccurence(int arr[], int n, int target) {
        int a = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                a = i;
                break;
            }
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array length: ");
        int n = sc.nextInt();
        sc.nextLine();  // Consume the leftover newline

        int arr[] = new int[n];
        System.out.println("Enter array elements: ");

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter target element: ");
        int target = sc.nextInt();
        Question2 obj = new Question2();

        System.out.println(obj.FirstOccurence(arr, n, target));

    }
}
