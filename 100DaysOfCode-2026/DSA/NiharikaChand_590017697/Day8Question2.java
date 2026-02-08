import java.util.*;
class Day8Question2 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Enter a specific character: ");
        char ch = sc.next().charAt(0); int i, c = 0;
        for(i=0; i<str.length(); i++)
        {
            if(str.charAt(i) == ch)
            c++;
        }
        System.out.println("Count: " + c);
    }
}
