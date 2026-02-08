
import java.util.*;

class Question3 {

    static boolean checkAnagram(String str1, String str2) {
        String s1 = str1.replaceAll("\\s", "");
        String s2 = str2.replaceAll("\\s", "");

        if (str1.length() != str2.length()) {
            return false;
        } else {
            char c1[] = str1.toLowerCase().toCharArray();
            char c2[] = str2.toLowerCase().toCharArray();

            Arrays.sort(c1);
            Arrays.sort(c2);
            return Arrays.equals(c1, c2);

        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 1st string: ");
        String str1 = sc.nextLine();

        System.out.print("Enter 2nd string: ");
        String str2 = sc.nextLine();

        System.out.println(checkAnagram(str1, str2));

        sc.close();
    }
}
