
import java.util.*;

class Day_20_Question3 {

    public static void main(String[] args) {
        int[] arr = {1, 23, 12, 9, 30, 2, 50};
        int k = 4;

        System.out.println(findK(arr, k));
    }

    public static int findK(int[] arr, int k) {
        PriorityQueue<Integer> q = new PriorityQueue<>();

        for (int i : arr) {
            q.add(i);
            if (q.size() > k) {
                q.poll();
            }
        }

        return q.peek();
    }

}
