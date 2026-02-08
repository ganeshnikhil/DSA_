import java.util.*;
class Day12Question3 
{
    public static String compress(String str)
    {
        StringBuilder s = new StringBuilder();  // s  = compressed string
        int i, c=1;
        if (str == null || str.isEmpty()) 
        {
           return str;
        }
        for(i=0; i<str.length()-1; i++)
        {
           if(str.charAt(i) == str.charAt(i+1))
           {
            c++;
           }
           else
           {
            s.append(str.charAt(i)).append(c);
            c=1;
           }
        }
        s.append(str.charAt(str.length() - 1)).append(c);
        if(str.length() >= s.length())
        return s.toString();
        else
        return str;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = sc.nextLine();
        String result = compress(str);
        System.out.println(result);
    }
}






        