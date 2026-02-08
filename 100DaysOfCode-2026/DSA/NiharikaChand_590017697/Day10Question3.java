import java.util.*;
class Day10Question3 
{

    public static boolean checkAnagram(String str1, String str2) 
    {
        String s1 = str1.replaceAll("\\s", "");
        String s2 = str2.replaceAll("\\s", "");

        if (s1.length() != s2.length()) 
        {
            return false;
        } 
        else 
        {
            char ch1[] = s1.toLowerCase().toCharArray();
            char ch2[] = s2.toLowerCase().toCharArray();

            Arrays.sort(ch1);
            Arrays.sort(ch2);
            return Arrays.equals(ch1, ch2);

        }
    }

    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String st1 = sc.nextLine();
        System.out.println("Enter a string: ");
        String st2 = sc.nextLine();
        System.out.println(checkAnagram(st1, st2));
    }
}
