import java.util.*;
public class PalindromeChecker 
{
    public static boolean isPalindrome(String s) 
    {
        String str= "";
        for (char c : s.toCharArray()) 
        {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) 
            {
                if (c >= 'A' && c <= 'Z') 
                {
                    c = (char)(c + 32);
                }
                str += c; 
            }
        }
        int left = 0;
        int right = str.length() - 1;
        while (left < right) 
        {
            if (str.charAt(left)!=str.charAt(right)) 
            {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string to check if it's a palindrome:");
        String input = scanner.nextLine();
        if (isPalindrome(input)) 
        {
            System.out.println("It is a palindrome.");
        } 
        else 
        {
            System.out.println("It is NOT a palindrome.");
        }
    }
}
