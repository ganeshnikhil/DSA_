public class Q3 {
    public static int integerSqrt(int n) {
        if (n < 0) throw new IllegalArgumentException("Input must be non-negative");
        int left = 0, right = n, ans = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long sq = (long) mid * mid;
            if (sq == n) return mid;
            if (sq < n) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        int n = 16;
        System.out.println(integerSqrt(n)); 
    }
}