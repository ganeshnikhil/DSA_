import java.util.*;
class Day9Question2
{
    public static void main(String[] args)
    {
        String str;
        int l;
        System.out.println("Enter a String");
        Scanner scr=new Scanner(System.in);
        str=scr.nextline();
        l=str.length();
        int i=0,count_c=0,count_v=0;
        for(i=0;i<l;i++)
        {
            if(str.charAt[i]=='a' || str.charAt[i]=='e' || str.charAt[i]=='i' || str.charAt[i]=='o' || str.charAt[i]=='u' || str.charAt[i]=='A' || str.charAt[i]=='E' || str.charAt[i]=='I' || str.charAt[i]=='O' || str.charAt[i]=='U')
                count_v++;
            else
                count_c++;
        }
            System.out.println("Vowels: "+count_v+",Consonants "+count_c );
        }
}
