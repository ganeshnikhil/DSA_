public class Q3{
    
    public static boolean searchMatrix(int[][] matrix, int target) {
        int row = 0;
        int col = matrix[0].length - 1;
        
        while (row < matrix.length && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                col--; 
            } else {
                row++; 
            }
        }
        
        return false;
    }
    
    public static void main(String[] args) {
        int[][] matrix = {
            {1, 4, 7},
            {2, 5, 8},
            {3, 6, 9}
        };
        int target = 5;
        
        boolean found = searchMatrix(matrix, target);
        System.out.println("Matrix: [[1,4,7],[2,5,8],[3,6,9]]");
        System.out.println("Target: " + target);
        System.out.println("Found: " + found);
    }
}