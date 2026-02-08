import java.util.*;
class Day9Question3 
{
   public static void main(String args[])
   {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a string: ");
    String s = sc.nextLine();
    int i;
    for (i = 0; i < s.length(); i++) 
    {
        char ch = s.charAt(i);
        if (s.indexOf(ch) == s.lastIndexOf(ch)) 
        {
            System.out.println(ch);
            return;
        }
    }
        
    System.out.println(-1); 
   }
}
