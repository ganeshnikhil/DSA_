// A problem that teaches multi-dimensional search optimization and demonstrates strategic 
// positioning techniques for efficient matrix traversal. 
// You are given a 2D matrix where each row is sorted in ascending order and each column is 
// also sorted in ascending order. Write an efficient algorithm to search for a target value in this 
// matrix. Return true if the target is found, false otherwise. The key insight is to start from a 
// strategic position that allows you to eliminate either a complete row or column with each 
// comparison, achieving optimal time complexity. 
// Your task: Search efficiently in sorted 2D matrix using strategic positioning approach. 
// Examples Input: Matrix: [[1,4,7],[2,5,8],[3,6,9]], Target: 5 
// Output: true

package DSA.Tanisha_500125283;
public class Day19Question3 {

    public static boolean search(int[][] matrix, int target) {
        if (matrix == null || matrix.length == 0 || matrix[0].length == 0)
            return false;

        int row = 0;
        int col = matrix[0].length - 1; 

        while (row < matrix.length && col >= 0) {
            int current = matrix[row][col];

            if (current == target) {
                return true;
            } else if (current > target) {
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

        System.out.println(search(matrix, 5)); 
    }
}
