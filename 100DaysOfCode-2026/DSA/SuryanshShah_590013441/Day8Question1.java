import java.util.*;
class Day8Question1
{
    public static void main(String[] args)
    {
        String str;
        int l;
        System.out.println("Enter a String");
        Scanner scr=new Scanner(System.in);
        str=scr.nextline();
        l=str.length();
        System.out.println("Original String: "+str);
        System.out.println("Length of the String is: "+l);
        System.out.println("Uppercase: "+toUpperCase(str));
        System.out.println("Lowercase: "+toLowerCase(str));
    }
}
