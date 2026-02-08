public class Question1 {
    public static boolean isPalindrome(String s) {
        StringBuilder filtered = new StringBuilder();

        for (char c : s.toCharArray()) {
            if (Character.isLetterOrDigit(c)) {
                filtered.append(Character.toLowerCase(c));
            }
        }

        String clean = filtered.toString();
        String reversed = filtered.reverse().toString();

        return clean.equals(reversed);
    }

    public static void main(String[] args) {
        System.out.println(isPalindrome("A man, a plan, a canal: Panama")); // true
        System.out.println(isPalindrome("race a car"));                     // false
        System.out.println(isPalindrome("Was it a car or a cat I saw?"));  // true
    }
}
