public class Question2 {
    public static String longestPalindrome(String s) {
        int n = s.length();
        if (n < 2) return s;

        boolean[][] dp = new boolean[n][n];
        int start = 0, maxLength = 1;

        // All substrings of length 1 are palindromes
        for (int i = 0; i < n; i++) dp[i][i] = true;

        for (int end = 1; end < n; end++) {
            for (int begin = 0; begin < end; begin++) {
                if (s.charAt(begin) == s.charAt(end)) {
                    if (end - begin < 3 || dp[begin + 1][end - 1]) {
                        dp[begin][end] = true;
                        if (end - begin + 1 > maxLength) {
                            maxLength = end - begin + 1;
                            start = begin;
                        }
                    }
                }
            }
        }

        return s.substring(start, start + maxLength);
    }

    public static void main(String[] args) {
        System.out.println(longestPalindrome("babad"));   // "bab" or "aba"
        System.out.println(longestPalindrome("cbbd"));    // "bb"
        System.out.println(longestPalindrome("racecar")); // "racecar"
    }
}
