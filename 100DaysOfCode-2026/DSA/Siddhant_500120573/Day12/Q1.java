public class Q1 {
    public static boolean isRotation(String s1, String s2) {
        if (s1.length() != s2.length()) return false;
        return (s1 + s1).contains(s2);
    }

    public static void main(String[] args) {
        String str1 = "abcde";
        String str2 = "cdeab";
        System.out.println(isRotation(str1, str2)); // Output: true
    }
}