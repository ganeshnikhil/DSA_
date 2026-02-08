import java.util.Scanner;
public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String s = sc.nextLine();
        int l = s.length();
        int[] cnt = new int[l];
        boolean fnd = false;
        for (int i = 0; i < l; i++) {
         for (int j = 0; j < l; j++) {
            if (s.charAt(i) == s.charAt(j)) {
                    cnt[i]++;
                }
            }}
        for (int i = 0; i < l; i++) {
            if (cnt[i] == 1) {
                System.out.println("First non repeating character-  " + s.charAt(i));
                fnd = true;
                break;
            }
        }
        if (!fnd)
            System.out.println("-1");
    }
}
