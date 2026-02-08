import java.util.*;
class Converter 
{
    public static void main(String[] args) 
    {
        String str;
        int l;
        System.out.println("Enter a String");
        Scanner scr = new Scanner(System.in);
        str = scr.nextLine();  
        l = str.length();
        System.out.println("Original String: " + str);
        System.out.println("Length of the String is: " + l);
        System.out.println("Uppercase: " + str.toUpperCase());
        System.out.println("Lowercase: " + str.toLowerCase());
    }
}
