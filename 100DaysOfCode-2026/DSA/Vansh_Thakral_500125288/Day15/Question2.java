import java.util.Arrays;
import java.util.Comparator;

public class Question2 {
    public static void main(String[] args) {
        String[] words = {"apple", "kiwi", "delhi", "puppy"};

        Arrays.sort(words, Comparator.comparingInt(String::length));  // Stable custom sort

        System.out.println("Sorted by length:");
        System.out.println(Arrays.toString(words));
    }
}
