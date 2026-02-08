//  Given a string containing multiple words separated by spaces, reverse the order of the words but keep 
//  each word intact. For example, "Hello World Programming" should become "Programming World Hello". 
//  Handle multiple spaces between words by preserving single spaces in the output.
//  Task: Reverse word order while maintaining word integrity and proper spacing.
//  Examples Input:"Hello World Programming"
//  Output: "Programming World Hello"

package DSA.Tanisha_500125283;

public class Day13Question3 {
    public static String reversedWords(String input) {
        String[] words = input.trim().split("\\s+"); 
        StringBuilder reversed = new StringBuilder();

        for (int i = words.length - 1; i >= 0; i--) { 
            reversed.append(words[i]);
            if (i != 0) {
                reversed.append(" "); 
            }
        }

        return reversed.toString();
    }

    public static void main(String[] args) {
        String input1 = "Hello World Programming";
        System.out.println(reversedWords(input1)); 
    }
}
