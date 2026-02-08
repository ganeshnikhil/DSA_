import java.util.*;
public class Day9Question1 
{
    public static boolean checkPalindrome(String s) 
    {
        s = s.toLowerCase();

        String rev = ""; int i;
        for (i = s.length() - 1; i >= 0; i--) 
        {
            rev += s.charAt(i);
        }

        return s.equals(rev);
    }

    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String: ");
        String str = sc.nextLine();

        boolean result = checkPalindrome(str);
        System.out.println(result); 
    }
}
