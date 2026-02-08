import java.util.*;

public class Day_8_Question_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the string:");
        String str = sc.nextLine();

        System.out.println("Enter the character to count:");
        char target = sc.next().charAt(0);

        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == target) {
                count++;
            }
        }

        System.out.println("Frequency of '" + target + "': " + count);
    }
}
