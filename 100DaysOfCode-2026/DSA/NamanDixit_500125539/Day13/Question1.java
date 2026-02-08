
import java.util.*;

class Question1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String input = sc.nextLine();
        input = input.trim() + " ";

        String w = "";
        int ind = 0, l = 0;
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (ch == ' ') {
                String word = input.substring(ind, i);
                if (word.length() > 1) {
                    w = word;
                    l = word.length();
                }
                ind = i;
            }
        }
        System.out.println(w);

        sc.close();
    }
}
