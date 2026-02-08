import java.util.Scanner;

public class Question2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.nextLine();

        String result="";
        for(int i=0; i<str.length();i++){
        String z=""+str.charAt(i);
        if (result.contains(z)){
            continue;
        }
        result+=z;

        }
        System.out.println(result);
        sc.close();
    }
    
}
