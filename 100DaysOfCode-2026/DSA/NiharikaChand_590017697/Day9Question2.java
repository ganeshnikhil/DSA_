import java.util.*;
class Day9Question2 
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a string: ");
    String s = sc.nextLine();
    s = s.toLowerCase();
    int i, v=0, c=0;
    for(i=0; i<s.length(); i++)
    {
        char ch= s.charAt(i);
        if(Character.isLetter(ch))
        {
            if (ch == 'a'|| ch =='e'|| ch=='i'|| ch=='o'|| ch=='u')
            v++;
            else
            c++;
        }
    }
    System.out.println("Vowels: " + v);
    System.out.println("Consonants: " + c);
  }  
}
