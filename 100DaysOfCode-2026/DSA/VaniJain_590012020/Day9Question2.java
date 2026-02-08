import java.util.*;
class  Count_Vowels_Consonants  
{
    public static void main(String[] args) 
    {
        String str;
        int l;
        System.out.println("Enter a String");
        Scanner scr = new Scanner(System.in);
        str = scr.nextLine();
        l = str.length();
        int i=0, cc = 0, cv = 0;
        for (i = 0; i < l; i++) 
        {
            char ch = Character.toLowerCase(str.charAt(i)); 
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') 
            {
                cv++;
            } 
            else if (Character.isLetter(ch)) 
            {
                cc++;
            }
        }
        System.out.println("Vowels: " + cv + ", Consonants: " + cc);
    }
}
