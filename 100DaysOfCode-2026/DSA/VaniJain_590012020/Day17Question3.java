import java.util.*;
public class IntegerSquareRoot 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a positive number: ");
        int n = scanner.nextInt();
        if (n < 0) 
        {
            System.out.println("Please enter a non-negative number.");
            return;
        }
        int left = 0, right = n;
        int result = -1;
        while (left <= right) 
        {
            int mid = left + (right - left) / 2;
            long square = (long) mid * mid;
            if (square == n) 
            {
                result = mid;
                break;
            } else if (square < n) 
            {
                result = mid; 
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        System.out.println("Integer square root of " + n + " is: " + result);
    }
}
