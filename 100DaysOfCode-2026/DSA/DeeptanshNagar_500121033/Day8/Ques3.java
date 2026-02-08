// DAY 8 <-----/---> QUE 3


import java.util.Scanner;

public class Ques3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String input = sc.nextLine();

        if (input == null) {
            System.out.println("Reversed: null");
        } else if (input.isEmpty()) {
            System.out.println("Reversed: \"\"");
        } else {
            String reversed = reverse(input);
            System.out.println("Reversed: \"" + reversed + "\"");
        }

        sc.close();
    }

    public static String reverse(String s){
        int[] codePoints = s.codePoints().toArray();
        StringBuilder reversed = new StringBuilder();
        for (int i = codePoints.length - 1; i >= 0; i--) {
            reversed.appendCodePoint(codePoints[i]);
        }
        return reversed.toString();
    }
}
