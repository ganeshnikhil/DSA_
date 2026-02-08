import java.util.*;

public class Day_20_Question_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of students: ");
        int n = sc.nextInt();
        String[] names = new String[n];
        int[] grades = new int[n];
        sc.nextLine(); // consume leftover newline

        for (int i = 0; i < n; i++) {
            System.out.print("Enter name of student " + (i + 1) + ": ");
            names[i] = sc.nextLine();
            System.out.print("Enter grade of " + names[i] + ": ");
            grades[i] = sc.nextInt();
            sc.nextLine(); // consume newline
        }

        // Selection sort based on grades (descending)
        for (int i = 0; i < n - 1; i++) {
            int maxIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (grades[j] > grades[maxIndex]) {
                    maxIndex = j;
                }
            }
            // Swap names and grades
            int tempGrade = grades[i];
            grades[i] = grades[maxIndex];
            grades[maxIndex] = tempGrade;

            String tempName = names[i];
            names[i] = names[maxIndex];
            names[maxIndex] = tempName;
        }

        System.out.println("Sorted students by grades:");
        for (int i = 0; i < n; i++) {
            System.out.println(names[i] + ": " + grades[i]);
        }
    }
}
