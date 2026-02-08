import java.util.Scanner;

public class Ques2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String s = sc.nextLine();
      int vl = 0;
      int cons = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
         if (Character.isLetter(ch)) {
                ch = Character.toLowerCase(ch);
              if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vl++;
                } 
                else 
                cons++;  
            }
        }
        System.out.println("Vowels- " + vl + ",Consonants - " + cons);
    }}
