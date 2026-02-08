import java.util.Scanner;

public class Ques1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string 1: ");
        String str = sc.nextLine().trim();
        System.out.print("Enter a string 2: ");
        String cstr = sc.nextLine().trim();

        if (str.length() == cstr.length()) {
            String nstr = cstr + cstr;
            if (nstr.contains(str)) 
            System.out.println("true");
             else 
                System.out.println("false");
        } else 
            System.out.println("false");
    }
}
