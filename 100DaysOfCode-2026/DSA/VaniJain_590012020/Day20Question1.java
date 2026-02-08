import java.util.*;
class Student
{
    String name;
    int grade;
    Student(String name, int grade) {
        this.name = name;
        this.grade = grade;
    }
}
public class StudentSorter 
{
    public static void main(String[] args) 
  {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of students: ");
        int n = scanner.nextInt();
        scanner.nextLine();
        List<Student> students = new ArrayList<>();
        for (int i = 0; i < n; i++) 
        {
            System.out.print("Enter name of student #" + (i + 1) + ": ");
            String name = scanner.nextLine();
            System.out.print("Enter grade of " + name + ": ");
            int grade = scanner.nextInt();
            scanner.nextLine(); 
            students.add(new Student(name, grade));
        }
        students.sort((s1, s2) -> Integer.compare(s2.grade, s1.grade));
        System.out.println("\nStudents sorted by grade (highest first):");
        for (Student s : students) 
        {
            System.out.println(s.name + " - " + s.grade);
        }
    }
}
