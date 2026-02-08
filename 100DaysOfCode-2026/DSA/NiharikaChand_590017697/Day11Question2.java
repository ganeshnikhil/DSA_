import java.util.*;
class Day11Question2 
{
    // Checks if a substring str[i..j] is a palindrome
    public static boolean isPalin(String s, int i, int j) 
    {
        while (i < j) 
        {
            char ch1 = s.charAt(i);
            char ch2 = s.charAt(j);
            if (ch1 != ch2) 
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    // Returns the longest palindromic substring
    public static String longPalin(String s) 
    {
        int i, j;
        int max = 0, start = 0, end = 0;
        for (i = 0; i < s.length(); i++) 
        {
            for (j = i; j < s.length(); j++) 
            {
                if (isPalin(s, i, j)) 
                {
                    if ((j - i + 1) > max) 
                    {
                        max = j - i + 1;
                        start = i;
                        end = j;
                    }
                }
            }
        }
        return s.substring(start, end + 1);
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string: ");
        String str = sc.nextLine();

        String result = longPalin(str);
        System.out.println(result); 
    }
}