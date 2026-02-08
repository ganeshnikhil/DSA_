
import java.util.Scanner;

public class Question2 {

    static void VowelsandConsonants(String str) {

        int consonant =0;
        int vowel = 0;

        for (int i = 0; i < str.length(); i++) {
            char z= str.charAt(i);
            if(Character.isLetter(z)){
                z=Character.toLowerCase(z);
            if (z == 'a'||z =='e'||z=='i'||z=='o'||z=='u') {
                vowel++;
            }else{
                consonant++;
            }
        }
        }
        System.out.println("Vowels: "+vowel+" Consonats: "+consonant);

    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String: ");
        String str = sc.nextLine();

        VowelsandConsonants(str);

        sc.close();
    }
}
