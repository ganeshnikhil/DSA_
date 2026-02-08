import java.util.*;
class Day19Question3 
{
    public static boolean search(int arr[][],int t)
    {
        for(int i = 0 ;i < arr.length;i++)
        {
            for(int j = 0 ; j < arr[0].length;j++)
            {
                if(arr[i][j] == t)
                {
                    return true;
                }

            }
        }
        return false;
    }

    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        int i, j;
        System.out.println("Enter size(rows and columns): ");
        int row = sc.nextInt();
        int col = sc.nextInt();
        int arr[][] = new int[row][col];
        System.out.println("Enter elements of the matrix: ");
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < col; j++) 
            {
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter target: ");
        int tar = sc.nextInt();
        System.out.println(search(arr, tar));
       
    }
}
