import java.util.*;
class Day17Question3 
{
    public static int intSqRoot(int n)
    {
        if(n == 0 || n == 1)
        return n;

        int b = 1, e = n-1, mid, ans = -1;
        while(e >= b)
        {
            mid = (b+e)/2;
            if((mid * mid) <= n)
            {
                ans = mid;
                b = mid + 1;
            }
            else
            e = mid - 1;
        }
        return ans;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a positive integer: ");
        int num = sc.nextInt();
        if(num < 0)
        System.out.println("Invalid input");
        else
        {
            int result = intSqRoot(num);
            System.out.println("Output: " + result);
        }
    }
}
