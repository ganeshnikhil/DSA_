
import java.util.Scanner;

class Question3 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        //Enter array lenght
        int n = sc.nextInt();
        int nums[] = new int[n];
        //Enter elements of the array
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }
        //Sum of array
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
        }

        // print sum
        System.out.print("Sum = " + sum);

        sc.close(); // Always good to close the scanner
    }
}
