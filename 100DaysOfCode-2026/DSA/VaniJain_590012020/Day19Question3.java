import java.util.*;
public class MatrixSearch 
{
    public static boolean searchMatrix(int[][] matrix, int target) 
    {
        int row = 0, col = matrix[0].length - 1;
        while (row < matrix.length && col >= 0) 
        {
            if (matrix[row][col] == target) return true;
            if (matrix[row][col] > target) col--;
            else row++;
        }
        return false;
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Rows: ");
        int m = sc.nextInt();
        System.out.print("Cols: ");
        int n = sc.nextInt();
        int[][] matrix = new int[m][n];
        System.out.println("Enter matrix:");
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                matrix[i][j] = sc.nextInt();

        System.out.print("Target: ");
        int target = sc.nextInt();
        System.out.println(searchMatrix(matrix, target) ? "Found" : "Not Found");
    }
}
