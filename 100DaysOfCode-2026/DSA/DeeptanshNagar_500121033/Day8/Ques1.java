// DAY 8 <-----/---> QUE 1


import java.util.*;

public class Ques1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String s = sc.nextLine();

        System.out.println("Length: " + s.length() + ", Original: \"" + s + "\", Uppercase: \"" + s.toUpperCase() + "\", Lowercase: \"" + s.toLowerCase() + "\"");

        sc.close();
    }
}
