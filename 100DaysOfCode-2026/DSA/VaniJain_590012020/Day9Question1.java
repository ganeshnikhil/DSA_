import java.util.*;
class Check_Palindrome 
{
    public static void main(String[] args) 
    {
        String str;
        int l, i=0, j=l-1, f=0;;
        System.out.println("Enter a String");
        Scanner scr = new Scanner(System.in);
        str = scr.nextLine();
        l = str.length();
        int i = 0, j = l - 1, f=0;
        while (i<j) 
        {  
            if (str.charAt(i) != str.charAt(j)) 
            {
                f=1;
                break;
            }
            i++;
            j--;
        }
        if (f == 1)
            System.out.println("false");
        else
            System.out.println("true");
    }
}
