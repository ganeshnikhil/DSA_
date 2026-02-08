// DAY 9 <-----/---> QUE 3


import java.util.Scanner;

public class Ques3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String input = sc.nextLine();
        int size = input.length();
        int[] count = new int[size];
        boolean found = false;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (input.charAt(i) == input.charAt(j)) {
                    count[i]++;
                }
            }
        }

        for (int i = 0; i < size; i++) {
            if (count[i] == 1) {
                System.out.println("First non repeating character : " + input.charAt(i));
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("-1");
        }

        sc.close();
    }
}
