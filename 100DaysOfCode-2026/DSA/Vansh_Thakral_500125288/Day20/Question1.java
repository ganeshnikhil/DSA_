import java.util.*;

public class Question1 {
    public static void main(String[] args) {
        List<Student> students = new ArrayList<>();
        students.add(new Student("Ram", 85));
        students.add(new Student("Bhuvi", 92));
        students.add(new Student("Chetan", 78));

        students.sort((a, b) -> b.grade - a.grade); // Descending sort

        for (Student s : students) {
            System.out.println("(" + s.name + ", " + s.grade + ")");
        }
    }

    static class Student {
        String name;
        int grade;

        Student(String name, int grade) {
            this.name = name;
            this.grade = grade;
        }
    }
}
