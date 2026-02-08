import java.util.*;
public class Rotation 
{
    public static boolean isRotation(String s1, String s2) 
    {
        if (s1.length() == s2.length() && s1.length() > 0) 
        {
            String concatenated = s1 + s1;
            return concatenated.contains(s2);
        }
        return false;
    }
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first string: ");
        String s1 = scanner.nextLine();
        System.out.print("Enter second string: ");
        String s2 = scanner.nextLine();
        boolean result = isRotation(s1, s2);
        if (result)
        {
            System.out.println("The second string is a rotation of the first string.");
        } else {
            System.out.println("The second string is NOT a rotation of the first string.");
        }
    }
}
