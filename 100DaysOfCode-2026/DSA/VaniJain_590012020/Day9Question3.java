import java.util.*;
class Repeate
{
    public static void main(String[] args) 
    {
        String str;
        int l,flag = 0,count = 0;
        System.out.println("Enter a String");
        Scanner scr = new Scanner(System.in);
        str = scr.nextLine(); 
        l = str.length();
        char ch = ' ';
        for (int i = 0; i < l; i++) 
        {
            for (int j = 0; j < l; j++) 
            {
                if (str.charAt(i)==str.charAt(j)) 
                {  
                    count++;
                }
            }
            if (count==1) 
            {
                ch = str.charAt(i);
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            System.out.println("'" + ch + "'");
        else
            System.out.println("-1");
    }
}
