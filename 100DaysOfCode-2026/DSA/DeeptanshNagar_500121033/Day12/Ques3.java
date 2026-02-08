// DAY 12 <-----/---> QUE 3

import java.util.Scanner;

public class Ques3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = sc.nextLine().trim();

        StringBuilder compressed = new StringBuilder();
        int count = 1;

        for (int i = 0; i < input.length(); i++) {
            if (i < input.length() - 1 && input.charAt(i) == input.charAt(i + 1)) {
                count++;
            } else {
                compressed.append(input.charAt(i)).append(count);
                count = 1;
            }
        }

        String compressedStr = compressed.toString();
        if (compressedStr.length() < input.length()) {
            System.out.println(compressedStr);
        } else {
            System.out.println(input);
        }
        sc.close();
    }
}
