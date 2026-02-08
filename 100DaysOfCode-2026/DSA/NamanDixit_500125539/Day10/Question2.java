
import java.util.Scanner;

public class Question2 {

    static void removeSpaces(String str1) {
        str1 = str1.trim();  //removes leading/trailing spaces
        String s = "";

        for (int i = 0; i < str1.length(); i++) {
            if (str1.charAt(i) != ' ') {
                s += str1.charAt(i);  // Append only non-space characters
            }
        }

        System.out.println(s);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str1 = sc.nextLine();

        removeSpaces(str1);
        sc.close();
    }
}
