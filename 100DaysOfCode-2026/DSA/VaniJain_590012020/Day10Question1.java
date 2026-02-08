import java.util.*;
class Day10Question1 
{
    public static void main(String[] args) 
    {
        Scanner scr = new Scanner(System.in);
        System.out.print("String1: ");
        String str = scr.nextLine();
        System.out.print("String2: ");
        String s = scr.nextLine();
        if (str.equals(s))
            System.out.println("Equal");
        else
            System.out.println("Not Equal");
        if (str.equalsIgnoreCase(s))
            System.out.println("Equal ignoring case");
        else
            System.out.println("Not equal ignoring case");
        int compareResult = str.compareTo(s);
        if (compareResult < 0)
            System.out.println(str + " comes before " + s);
        else if (compareResult > 0)
            System.out.println(s + " comes before " + str);
        else
            System.out.println("Strings are identical");
    }
}
