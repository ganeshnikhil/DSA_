
import java.util.*;

class Question1 {

    boolean checkPalindrome(String str) {
        str = str.toLowerCase().replaceAll("[^A-Za-z0-9]", "");

        int i=0;
        int j=str.length()-1;
        while(i<=j){
            if(str.charAt(i)!=str.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.nextLine();
        Question1 obj = new Question1();
        System.out.println(obj.checkPalindrome(str));

        sc.close();
    }
}
