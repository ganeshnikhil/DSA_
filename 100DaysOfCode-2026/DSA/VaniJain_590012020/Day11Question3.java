import java.util.*;
public class PalindromicSubstrings 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = scanner.nextLine();
        int c=0;
        int n = s.length();
        for (int center = 0; center < 2 * n - 1; center++) 
        {
            int left=center/2;
            int right=left+(center%2);
            while (left >= 0 && right < n && s.charAt(left) == s.charAt(right)) 
            {
                c++;
                left--;
                right++;
            }
        }

        System.out.println("Total palindromic substrings: " + c);
    }
}
