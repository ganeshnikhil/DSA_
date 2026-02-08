import java.util.*;

class Question3 {

    // Correct method to calculate integer square root using binary search
    int SqrBinarySearch(int x) {
        if (x < 0) {
            throw new IllegalArgumentException("Square root of a negative number is not defined.");
        }

        if (x == 0 || x == 1) {
            return x;
        }

        int low = 1;
        int high = x / 2;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long square = (long) mid * mid;

            if (square == x) {
                return mid;
            } else if (square < x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number to find its integer square root: ");
        int target = sc.nextInt();

        Question3 obj = new Question3();
        int result = obj.SqrBinarySearch(target);

        System.out.println("Integer square root of " + target + " is: " + result);
    }
}
