import java.util.*;
class Day8Question1 
{
   public static void main(String args[])
   {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = sc.nextLine();
        int len = str.length();
        System.out.println("Length: " + len);
        System.out.println("Original string: " + str);
        System.out.println("Uppercase: " + str.toUpperCase());  
        System.out.println("Lowercase: " + str.toLowerCase());  
   } 
}
