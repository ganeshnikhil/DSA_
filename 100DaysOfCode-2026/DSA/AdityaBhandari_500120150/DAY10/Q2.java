import java.util.*;

public class Q2{

    public static void main(String[] args)
    {
        String s = "hello world";
        String a = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (!Character.isWhitespace(c)) {
                a += c;
            }
        }
        System.out.println(a);
    }
}