public class Q1 {
    public static void main(String[] args) {
        String str1 = "Hello";
        String str2 = "hello";

        if (str1.equals(str2)) {
            System.out.println("Exactly equal");
        } else if (str1.equalsIgnoreCase(str2)) {
            System.out.println("Not equal, Equal ignoring case");
        } else {
            System.out.println("Completely different");
        }

        int cmp = str1.compareTo(str2);
        if (cmp < 0) {
            System.out.println("\"" + str1 + "\" comes before \"" + str2 + "\"");
        } else if (cmp > 0) {
            System.out.println("\"" + str2 + "\" comes before \"" + str1 + "\"");
        } else {
            System.out.println("Both strings are lexicographically equal");
        }
    }
}