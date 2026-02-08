
import java.util.*;

class Q2 {

    public static void main(String[] args) {
        int[] arr1 = {1, 5, 9, 10};
        int[] arr2 = {2, 3, 8, 13};

        int[] merged = merge(arr1, arr2);
        System.out.println(Arrays.toString(merged));
    }

    public static int[] merge(int[] arr1, int[] arr2) {
        int n = arr1.length, m = arr2.length;
        int[] res = new int[n + m];

        int i = 0, j = 0, k = 0;
        while (i < n && j < m) {
            if (arr1[i] <= arr2[j]) {
                res[k++] = arr1[i++];
            } else {
                res[k++] = arr2[j++];
            }
        }

        while (i < n) {
            res[k++] = arr1[i++];
        }

        while (j < m) {
            res[k++] = arr2[j++];
        }

        return res;
    }

}
