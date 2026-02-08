import java.util.*;

public class Day_17_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a positive number:");
        int num = sc.nextInt();

        int low = 0, high = num, ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (mid * mid <= num) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        System.out.println("Integer square root: " + ans);
    }
}
