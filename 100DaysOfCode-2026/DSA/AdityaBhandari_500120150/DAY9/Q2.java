import java.util.*;
public class Q2{
    public static void count(String str)
    {
        int vow = 0, con = 0;
        String ref = "aeiouAEIOU";
        for (int i = 0; i < str.length(); i++) {
            if ((str.charAt(i) >= 'A'
                 && str.charAt(i) <= 'Z')
                || (str.charAt(i) >= 'a'
                    && str.charAt(i) <= 'z')) {
                if (ref.indexOf(str.charAt(i)) != -1)
                    vow++;
                else
                    con++;
            }
        }
        System.out.println("Vowels = " + vow + "\nConsonants = "+ con);
    }
    public static void main(String[] args){
        String str = "hello";
        count(str);

        String str1="Programming";
        count(str1);

        String str2="aeiou";
        count(str2);

    }
}