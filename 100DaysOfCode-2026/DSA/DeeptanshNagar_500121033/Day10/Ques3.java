// DAY 10 <-----/---> QUE 3

import java.util.Arrays;
import java.util.Scanner;

public class Ques3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the string 1: ");
        String string1 = sc.nextLine();
        System.out.print("Enter the string 2: ");
        String string2 = sc.nextLine();

        boolean result = areAnagrams(string1, string2);
        System.out.println(result);
    }

    static boolean areAnagrams(String str1, String str2) {
        str1 = str1.toLowerCase().replace(" ", "");
        str2 = str2.toLowerCase().replace(" ", "");

        if (str1.length() != str2.length()) {
            return false;
        }

        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();

        Arrays.sort(arr1);
        Arrays.sort(arr2);
        return Arrays.equals(arr1, arr2);
    }
}
