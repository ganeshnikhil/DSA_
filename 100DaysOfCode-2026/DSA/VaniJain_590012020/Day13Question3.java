import java.util.*;
public class ReverseWords 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String str= scanner.nextLine();
        String[] words = str.split(" ");
        if (words.length == 0) 
        {
            System.out.println("No words entered.");
        }
        for (int i = words.length - 1; i >= 0; i--) 
        {
            System.out.print(words[i] + " ");
        }
        System.out.println(); 
    }
}
