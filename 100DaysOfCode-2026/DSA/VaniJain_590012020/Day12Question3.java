import java.util.*;
public class StringCompression 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string to compress: ");
        String str = scanner.nextLine();
        if (str==null||str.isEmpty()) 
        {
            System.out.println("Compressed string: ");
            return;
        }
        String compressed = "";
        char prev= str.charAt(0);
        int c=1;
        for (int i = 1; i < str.length(); i++) 
        {
            char current = str.charAt(i);

            if (current == prev) 
            {
                c++;
            } else 
            {
                compressed += prev;
                if (c>1) 
                {
                    compressed +=c;
                }
                prev= current;
                c= 1;
            }
        }
        compressed += prev;
        if (c>1) 
        {
            compressed+=c;
        }
        System.out.println("Compressed string: " + compressed);
    }
}
