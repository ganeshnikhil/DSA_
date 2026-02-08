import java.util.Scanner;
public class LongestPalindromicSubstring 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = scanner.nextLine();
        if (s == null || s.length() == 0) 
        {
            System.out.println("String is empty.");
            return;
        }
        int n = s.length(),start = 0, maxLen = 1;
        for (int i = 0; i < n; i++) 
        {
            int l = i, r = i;
            while (l >= 0 && r < n && s.charAt(l) == s.charAt(r)) 
            {
                int currLen = r - l + 1;
                if (currLen > maxLen) 
                {
                    maxLen = currLen;
                    start = l;
                }
                l--;
                r++;
            }
            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s.charAt(l) == s.charAt(r)) 
            {
                int currLen = r - l + 1;
                if (currLen > maxLen) 
                {
                    maxLen = currLen;
                    start = l;
                }
                l--;
                r++;
            }
        }
        String lpalindrome = s.substring(start, start + maxLen);
        System.out.println("Longest palindromic substring: " + lpalindrome);
    }
}
