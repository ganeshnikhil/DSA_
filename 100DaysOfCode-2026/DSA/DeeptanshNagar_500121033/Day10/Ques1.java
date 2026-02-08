// DAY 10 <-----/---> QUE 1

import java.util.Scanner;

public class Ques1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the string 1: ");
        String string1 = sc.nextLine();

        System.out.print("Enter the string 2: ");
        String string2 = sc.nextLine();

        String lower1 = string1.toLowerCase();
        String lower2 = string2.toLowerCase();

        int scmp = string1.compareTo(string2);

        if (scmp == 0) {
            System.out.println("Equal, Equal ignoring case, Both strings are identical!");
        } else {
            System.out.print("Not Equal, ");
            if (lower1.equals(lower2)) {
                System.out.print("Equal ignoring case, ");
            } else {
                System.out.print("Not equal ignoring case, ");
            }

            if (scmp < 0) {
                System.out.println(string1 + " comes before " + string2);
            } else {
                System.out.println(string2 + " comes before " + string1);
            }
        }
    }
}
