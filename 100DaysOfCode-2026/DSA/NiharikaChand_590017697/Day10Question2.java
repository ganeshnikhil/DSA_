import java.util.*;
class Day10Question2 
{
    public static void space(String str)
    {
        // all spaces
        System.out.print("Remove all:" + str.replaceAll("\\s", ""));

        // trim
        System.out.print(" Trim:" + str.trim());

        // single space
        System.out.print(" Single spaces:" + str.replaceAll("\\s+", " ").trim());
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String s = sc.nextLine();
        space(s);
    }
}
