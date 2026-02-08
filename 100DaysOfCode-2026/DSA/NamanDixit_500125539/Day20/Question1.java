import java.util.*;

// Student class renamed to match your request and kept separately
class Learner {
    String studentName;
    int studentGrade;

    // Constructor
    public Learner(String studentName, int studentGrade) {
        this.studentName = studentName;
        this.studentGrade = studentGrade;
    }

    // String representation
    public String toString() {
        return studentName + " - " + studentGrade;
    }
}

// Main class is now Question1
public class Question1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter total number of students: ");
        int totalLearners = scanner.nextInt();
        scanner.nextLine(); // consume newline

        List<Learner> learnerList = new ArrayList<>();

        for (int index = 0; index < totalLearners; index++) {
            System.out.print("Enter name of student " + (index + 1) + ": ");
            String inputName = scanner.nextLine();

            System.out.print("Enter grade of " + inputName + ": ");
            int inputGrade = scanner.nextInt();
            scanner.nextLine(); // consume newline

            learnerList.add(new Learner(inputName, inputGrade));
        }

        // Sort in descending order of grades
        learnerList.sort(new Comparator<Learner>() {
            public int compare(Learner obj1, Learner obj2) {
                return obj2.studentGrade - obj1.studentGrade;
            }
        });

        for (Learner entry : learnerList) {
            System.out.println(entry);
        }

        scanner.close();
    }
}
