import java.util.Scanner;
public class Q1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string : ");
        String Input = scanner.nextLine();

        System.out.println("String Length: " + Input.length());
        System.out.println("Original String: " + Input);
        System.out.println("UpperCase: " + Input.toUpperCase());
        System.out.println("LowerCase: " + Input.toLowerCase());

    }  
}
