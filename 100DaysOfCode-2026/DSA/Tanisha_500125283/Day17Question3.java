// Probelm Statement: A problem that demonstrates how binary search can be applied to mathematical problems 
// beyond array searching. 
// Find the integer square root of a given positive number using binary search technique. The 
// integer square root is the largest integer whose square is less than or equal to the given 
// number. Instead of checking every number from 1 to n, use binary search to efficiently 
// narrow down the search space. 
// Task: Calculate integer square root using binary search on the solution space. 
// Examples Input: 16 
// Output: 4


package DSA.Tanisha_500125283;
public class Day17Question3 {

    public static int integerSqrt(int n) {
        if (n < 2) return n; 

        int left = 1, right = n / 2;
        int result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long square = (long) mid * mid;

            if (square == n) {
                return mid; 
            } else if (square < n) {
                result = mid; 
                left = mid + 1;
            } else {
                right = mid - 1; 
            }
        }

        return result; 
    }

    public static void main(String[] args) {
        int n = 16;
        int result = integerSqrt(n);
        System.out.println("Output: " + result);  // Output: 4
    }
}
