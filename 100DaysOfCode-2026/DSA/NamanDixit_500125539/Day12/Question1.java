import java.util.*;

class Question1 {
    // Checks if str2 is a rotation of str1
    boolean isRotation(String str1, String str2) {
        if (str1.length() != str2.length()) {
            return false;
        }
        return (str1 + str1).contains(str2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 1st string: ");
        String str1 = sc.nextLine();

        System.out.print("Enter final string: ");
        String str2 = sc.nextLine();

        Question1 obj = new Question1();
        boolean result = obj.isRotation(str1, str2);
        System.out.println("Is Rotation: " + result);

        sc.close();
    }
}
