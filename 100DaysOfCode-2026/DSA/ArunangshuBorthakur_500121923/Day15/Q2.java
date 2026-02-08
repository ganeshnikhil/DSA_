
import java.util.*;

public class Q2 {

    public static void main(String[] args) {

        String[] arr = {"java", "python", "c", "javascript"};

        Arrays.sort(arr, Comparator.comparingInt((s) -> s.length()));
        System.out.println(Arrays.toString(arr));
    }
}