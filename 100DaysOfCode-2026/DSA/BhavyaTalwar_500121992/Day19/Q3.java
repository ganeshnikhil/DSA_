
class Q3 {

    public static void main(String[] args) {
        int[][] mat = {
            {1, 3, 5},
            {2, 4, 6},
            {7, 8, 9},};
        int num = 6;
        System.out.println(search(mat, num));
    }

    public static boolean search(int[][] mat, int num) {
        if (mat == null || mat.length == 0 || mat[0].length == 0) {
            return false;
        }

        int rows = mat.length;
        int cols = mat[0].length;

        int i = 0, j = cols - 1;

        while (i < rows && j >= 0) {
            if (mat[i][j] == num) {
                return true;
            } else if (mat[i][j] > num) {
                j--;
            } else {
                i++;
            }
        }

        return false;
    }

}
