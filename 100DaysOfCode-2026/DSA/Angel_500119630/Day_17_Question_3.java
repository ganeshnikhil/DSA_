public class Day_17_Question_3 {
      public static void main(String[] args) {
        System.out.println(squareRoot(16));
    }
    public static int squareRoot(int n) {
        if (n < 2) return n;

        int low = 1, high = n / 2;
        int result = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if ((long)mid * mid == n) {
                return mid;
            } else if ((long)mid * mid < n) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }

}
