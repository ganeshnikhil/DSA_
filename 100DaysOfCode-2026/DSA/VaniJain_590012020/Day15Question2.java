import java.util.*;
public class SortStrings 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of strings: ");
        int n = scanner.nextInt();
        scanner.nextLine();
        String[] strings = new String[n];
        System.out.println("Enter " + n + " strings:");
        for (int i = 0; i < n; i++) 
        {
            strings[i] = scanner.nextLine();
        }
        Arrays.sort(strings, Comparator.comparingInt(String::length));
        System.out.println("\nStrings sorted by length (shortest to longest):");
        for (String str : strings) 
        {
            System.out.println(str);
        }
    }
}
