public class Question3 {
    public static int integerSquareRoot(int n) {
        if (n < 2) return n;

        int left = 1, right = n, ans = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long square = (long) mid * mid;

            if (square == n) return mid;
            else if (square < n) {
                ans = mid; // Store the last possible square root
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        int number = 27;
        System.out.println(integerSquareRoot(number)); // Output: 5
    }
}
