import java.util.Scanner;

public class Question3 {

   int findMax(int arr[], int n) {
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
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
        
        Question3 obj = new Question3();

        System.out.println(obj.findMax(arr, n));

    }
    
}
