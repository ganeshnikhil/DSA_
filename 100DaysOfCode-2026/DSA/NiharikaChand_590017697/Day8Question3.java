import java.util.*;
class Day8Question3
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String s = sc.nextLine();
        StringBuilder sb = new StringBuilder(s);
        int i;
        for(i=0; i<sb.length()/2; i++)
        {
            int front = i;
            int back = sb.length() - 1- i;
            char frontch = sb.charAt(front);
            char backch = sb.charAt(back);
            sb.setCharAt(front, backch);
            sb.setCharAt(back, frontch);
        }
        System.out.println(sb);
    }
}
