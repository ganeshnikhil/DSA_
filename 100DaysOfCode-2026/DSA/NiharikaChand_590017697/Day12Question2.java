import java.util.*;
class Day12Question2 
{
    public static String removeDup(String s)
    {
        String st="", result="";
        int i;
        for(i=0; i<s.length(); i++)
        {
           st = ""+ s.charAt(i); 
           if(result.contains(st))
           {
            continue;
           }
           result += st;
        }
        return result;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = sc.nextLine();
        String result = removeDup(str);
        System.out.println(result);
    }
}
