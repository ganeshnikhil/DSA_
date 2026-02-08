import java.util.*;
class Day11Question3 
{
    public static int countPalin(String s, int n) 
    {
        if (s == null || s.length() == 0) 
        {
            return 0;
        }

        boolean arr[][] = new boolean[n][n];
        int c = 0, i, j;

        // for single char palindromes
        for (i = 0; i < n; i++) 
        {
            arr[i][i] = true;
            c++;
        }

        // it checks for all substrings of len >= 2
        for (i = n - 2; i >= 0; i--) 
        {
            for (j = i + 1; j < n; j++) 
            {
                if (s.charAt(i) == s.charAt(j)) 
                {
                    if (j - i == 1 || arr[i + 1][j - 1]) 
                    {
                        arr[i][j] = true;
                        c++;
                    }
                }
            }
        }

        return c;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string: ");
        String str = sc.nextLine();
        int result = countPalin(str, str.length());
        System.out.println(result);

    }
}
