// DAY 9 <-----/---> QUE 1


import java.util.Scanner;

public class Ques1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String input = sc.nextLine().toLowerCase();
        boolean isPalindrome = true;
        int size = input.length();

        for (int i = 0; i < size / 2; i++) {
            if (input.charAt(i) != input.charAt(size - i - 1)) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
        sc.close();
    }
}
