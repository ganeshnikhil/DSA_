import java.util.Arrays;
import java.util.Comparator;

public class Q2 {
    public static void main(String[] args) {
        String[] arr = {"apple", "pie", "washington", "cat"};
        Arrays.sort(arr, Comparator.comparingInt(String::length));
        System.out.println(Arrays.toString(arr));
    }    
}