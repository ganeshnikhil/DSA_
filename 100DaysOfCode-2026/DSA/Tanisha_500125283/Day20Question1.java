// Problem Statement:You are given a list of students along with their grades, represented as pairs (tuples) 
// containing the student's name and their numerical grade. Write a program to sort these 
// students by their grades in descending order (highest grade first). This type of sorting is 
// commonly used in educational systems for ranking students or generating merit lists. The 
// challenge involves understanding how to sort based on specific attributes of compound data 
// structures.  
// Task: Sort student records by grades in descending order using custom sorting criteria. 
// Examples Input: [("Ram", 85), ("Bhuvi", 92), ("Chetan", 78)] 
// Output: [("Bhuvi", 92), ("Ram", 85), ("Chetan", 78)]




package DSA.Tanisha_500125283;
import java.util.*;

public class Day20Question1 {

    public static void main(String[] args) {
       
        List<String[]> students = new ArrayList<>();
        students.add(new String[]{"Ram", "85"});
        students.add(new String[]{"Bhuvi", "92"});
        students.add(new String[]{"Chetan", "78"});

     
        students.sort((a, b) -> Integer.parseInt(b[1]) - Integer.parseInt(a[1]));

        for (String[] student : students) {
            System.out.println("(" + student[0] + ", " + student[1] + ")");
        }
    }
}
