
import java.util.*;

class Q2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String: ");
        String s = sc.nextLine();

        System.out.println("Remove all: " + s.replaceAll(" ", "") + ", Trim: " + s.trim() + ", Single spaces: " + s.trim().replaceAll("\\s+", " "));

    }
}