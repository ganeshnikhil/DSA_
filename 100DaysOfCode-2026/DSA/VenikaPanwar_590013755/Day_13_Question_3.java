import java.util.*; 

public class Day_13_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a sentence:");
        String input = sc.nextLine().trim();

        String[] words = new String[100];
        int wordIndex = 0;
        String word = "";

        for (int i = 0; i <= input.length(); i++) {
            char ch = (i < input.length()) ? input.charAt(i) : ' ';
            if (ch != ' ') {
                word += ch;
            } else if (!word.equals("")) {
                words[wordIndex++] = word;
                word = "";
            }
        }

        System.out.print("Reversed: ");
        for (int i = wordIndex - 1; i >= 0; i--) {
            System.out.print(words[i]);
            if (i > 0) System.out.print(" ");
        }
        System.out.println();
    }
}
