// DAY 11 <-----/---> QUE 1

import java.util.Scanner;

public class Ques1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String input = sc.nextLine();

        
        input = input.toLowerCase();

        StringBuilder filtered = new StringBuilder();
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if ((ch >= 'a' && ch <= 'z')) {
                filtered.append(ch);
            }
        }

        String string_f = filtered.toString();

        
        String rev_s = new StringBuilder(string_f).reverse().toString();

    
        if (string_f.equals(rev_s)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }

        sc.close();
    }
}
