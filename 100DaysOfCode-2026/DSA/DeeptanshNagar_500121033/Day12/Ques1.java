// DAY 12 <-----/---> QUE 1

import java.util.Scanner;

public class Ques1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string 1: ");
        String string = sc.nextLine().trim();

        System.out.print("Enter a string 2: ");
        String c_string = sc.nextLine().trim();

        if (string.length() == c_string.length()) {
            String new_string = c_string + c_string;
            if (new_string.contains(string)) {
                System.out.println("true");
            } else {
                System.out.println("false");
            }
        } else {
            System.out.println("false");
        }
        sc.close();
    }
}
