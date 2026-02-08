import java.util.*;
public class Main 
{
    public static void main(String[] args) 
    {
        Scanner scanner=new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s=scanner.nextLine();
        int wc=0;
        String longestWord="",currentWord="";
        for (int i = 0; i < s.length(); i++) 
        {
            char ch = s.charAt(i);
            if (ch != ' ') 
            {
                currentWord += ch;
            }
            else if (!currentWord.isEmpty()) 
            {
                wc++;
                if (currentWord.length() > longestWord.length()) 
                {
                    longestWord = currentWord;
                }
                currentWord = "";
            }
        }
        if (!currentWord.isEmpty()) 
        {
            wc++;
            if (currentWord.length() > longestWord.length()) 
            {
                longestWord = currentWord;
            }
        }
        System.out.println("Number of words: " + wc);
        System.out.println("Longest word: " + longestWord);
    }
}
