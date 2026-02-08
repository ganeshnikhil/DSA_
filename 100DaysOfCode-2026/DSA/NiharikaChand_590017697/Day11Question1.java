import java.util.*;
class Day11Question1 
{
    public static boolean checkPalin(String s)
    {
        int i;
        String rev = "";
        for(i=s.length()-1; i>=0; i--)
        {
            rev += s.charAt(i);  
        }
        return s.equals(rev);
    }

    public static void main(String args[])
    {
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter a string: ");
       String str = sc.nextLine(); 

       // space, punctuations removal and case insensitive       
       String st = str.toLowerCase().replaceAll("[^A-Za-z0-9]", "");
       boolean result = checkPalin(st);
       System.out.println(result);
    }
}
