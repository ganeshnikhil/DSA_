import java.util.*;
class Day10Question1
{
    public static void main(String[] args)
    {
        String str;
        int l;
        System.out.print("String1:    ,");
        Scanner scr=new Scanner(System.in);
        str=scr.nextline();
        l=str.length();
        System.out.println("String2:");
        s=scr.nextline();
        if(str.equals(s))
            System.out.print("Equal ,");
        else
            System.out.print("Not Equal ,");
        if(str.equalsIgnoreCase(s))
            System.out.print(" Equal ignoring case ,");
        else
            System.out.print(" Not equal ignoring case ,");
        if(str.compareTo(s)>0)
            System.out.print(" "+str+" comes before "+s);
         else if(str.compareTo(s)<0)
            System.out.print(" "+s+" comes before "+str);
         else if(str.compareTo(s)=0)
            System.out.print(" Strings are identical");
    }
}
