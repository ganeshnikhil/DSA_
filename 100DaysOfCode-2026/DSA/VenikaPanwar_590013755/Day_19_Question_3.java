import java.util.*;

public class Day_19_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter rows and columns of matrix:");
        int rows = sc.nextInt(), cols = sc.nextInt();
        int[][] matrix = new int[rows][cols];

        System.out.println("Enter matrix elements row-wise:");
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                matrix[i][j] = sc.nextInt();

        System.out.println("Enter target to search:");
        int target = sc.nextInt();

        boolean found = searchMatrix(matrix, target);
        System.out.println("Output: " + found);
    }

    public static boolean searchMatrix(int[][] mat, int target) {
        int row = 0, col = mat[0].length - 1;

        while (row < mat.length && col >= 0) {
            if (mat[row][col] == target)
                return true;
            else if (mat[row][col] > target)
                col--;
            else
                row++;
        }

        return false;
    }
}
