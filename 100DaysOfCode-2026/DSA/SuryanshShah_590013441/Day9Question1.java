import java.util.*;
class Day9Question1
{
    public static void main(String[] args)
    {
        String str;
        int l;
        System.out.println("Enter a String");
        Scanner scr=new Scanner(System.in);
        str=scr.nextline();
        l=str.length();
        int i=0,j=l-1,flag=0;
        while(i<l)
        {
            if(str.charAt[i]!=str.charAt[j])
            {
                flag=1;
                break;
            }
            i++;
            j--;
        }
        if(flag==1)
            System.out.println("false");
        else
            System.out.println("true");
    }
}
