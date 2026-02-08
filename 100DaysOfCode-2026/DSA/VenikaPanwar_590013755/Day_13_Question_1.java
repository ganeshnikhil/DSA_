import java.util.*; 

public class Day_13_Question_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a sentence:");
        String line = sc.nextLine();

        // Trim leading/trailing and normalize spacing
        line = line.trim();
        String word = "";
        int count = 0;
        String longest = "";

        for (int i = 0; i <= line.length(); i++) {
            char ch = (i < line.length()) ? line.charAt(i) : ' ';
            if (ch != ' ') {
                word += ch;
            } else if (!word.equals("")) {
                count++;
                if (word.length() > longest.length()) {
                    longest = word;
                }
                word = "";
            }
        }

        System.out.println("Word count: " + count);
        System.out.println("Longest word: \"" + longest + "\"");
    }
}
