import java.util.*;
public class Main 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = scanner.nextLine();
        int[] freq = new int[128]; 
        for (int i = 0; i < s.length(); i++) 
        {
            char c = s.charAt(i);
            freq[c]++;
        }
        int oddCount = 0;
        for (int i = 0; i < 128; i++) 
        {
            if (freq[i] % 2 != 0) 
            {
                oddCount++;
            }
        }
        if (oddCount <= 1) 
        {
            System.out.println("Can form a palindrome");
        } else 
        {
            System.out.println("Cannot form a palindrome");
        }
    }
}
