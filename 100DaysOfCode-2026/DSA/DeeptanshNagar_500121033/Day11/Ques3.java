// DAY 11 <-----/---> QUE 3

import java.util.Scanner;

public class Ques3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String input = sc.nextLine();
        input = input.toLowerCase();
        StringBuilder filtered = new StringBuilder();
        for (char ch : input.toCharArray()) {
            if (ch >= 'a' && ch <= 'z') {
                filtered.append(ch);
            }
        }

        String clean = filtered.toString();
        int size = clean.length();
        int count = 0;
        for (int i = 0; i < size; i++) {
            for (int j = i; j < size; j++) {
                if (isPalindrome(clean, i, j)) {
                    count++;
                }
            }
        }
        System.out.println("Number of substrings: " + count);
        sc.close();
    }
    private static boolean isPalindrome(String s, int start, int end) {
        while (start < end) {
            if (s.charAt(start) != s.charAt(end)) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
}
