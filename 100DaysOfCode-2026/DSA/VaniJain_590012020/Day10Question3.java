import java.util.*;
public class AnagramChecker 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter String 1: ");
        String str1 = scanner.nextLine();
        System.out.print("Enter String 2: ");
        String str2 = scanner.nextLine();
        String s1 = str1.replaceAll(" ", "").toLowerCase();
        String s2 = str2.replaceAll(" ", "").toLowerCase();
        if (s1.length() != s2.length()) 
        {
            System.out.println("Not anagrams.");
            return;
        }
        char[] arr1 = s1.toCharArray();
        char[] arr2 = s2.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        if (Arrays.equals(arr1, arr2)) 
        {
            System.out.println("The strings are anagrams.");
        } else 
        {
            System.out.println("The strings are not anagrams.");
        }
    }
}
