import java.util.Scanner;
public class RemoveDuplicates 
{

    public static String removeDuplicates(String input) 
    {
        String r= "";
        for (int i = 0; i < input.length(); i++) 
        {
            char cc = input.charAt(i);
            boolean isDuplicate = false;
            for (int j = 0; j < r.length(); j++) 
            {
                if (cc == r.charAt(j)) 
                {
                    isDuplicate = true;
                    break;
                }
            }
            if (!isDuplicate) 
            {
                r+= cc;
            }
        }

        return r;
    }
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        String output = removeDuplicates(input);

        System.out.println("String with unique characters: " + output);
    }
}
