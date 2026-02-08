public class Q3 {
    public static int countPalindromicSubstrings(String s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            count += expand(s, i, i);     
            count += expand(s, i, i + 1); 
        }
        return count;
    }

    private static int expand(String s, int left, int right) {
        int cnt = 0;
        while (left >= 0 && right < s.length() && s.charAt(left) == s.charAt(right)) {
            cnt++;
            left--;
            right++;
        }
        return cnt;
    }

    public static void main(String[] args) {
        System.out.println(countPalindromicSubstrings("abc")); 
        System.out.println(countPalindromicSubstrings("aaa")); 
    }
}