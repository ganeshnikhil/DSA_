import java.util.Arrays;
public class Q1{
    public static void main(String args[]) {
        int[] a = {64, 34, 25, 12, 22, 11, 90 };
        Arrays.sort(a);
        System.out.print("");
        for (int n : a) {
            System.out.print(n + " ");
        }
    }
}