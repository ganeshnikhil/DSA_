import java.util.*;
class Day10Question1 
{
    public static void order(String str1, String str2)
    {
        int result = str1.compareTo(str2);
        if(result < 0)
        System.out.print(str1 + " comes before " + str2);
        else
        System.out.print(str2 + " comes before " + str1);
    }

    public static void main(String args[])
    {
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter a string: ");
       String s1 = sc.nextLine();
       System.out.println("Enter a string: ");
       String s2 = sc.nextLine();
       
       //compare
       if(s1.equals(s2))
       {
        System.out.println("Equal, " + "Equal ignoring cases, " + "Strings are identical");
       }
       else if(s1.equalsIgnoreCase(s2))
       {
        System.out.print("Not equal, " + "Equal ignoring case, ");
        order(s1, s2);
       }
       else
       {
        System.out.print("Not equal, " + "Not equal ignoring case, ");
        order(s1, s2);
       }   
    }
}
