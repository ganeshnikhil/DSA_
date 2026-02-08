import java.util.regex.Pattern;
public class Q3{ 
    static String reverseWords(String str){ 
        Pattern pattern = Pattern.compile("\\s");  
        String[] temp = pattern.split(str); 
        String result = ""; 
        for (int i = 0; i < temp.length; i++) { 
            if (i == temp.length - 1) 
                result = temp[i] + result; 
            else
                result = " " + temp[i] + result; 
        } 
        return result; 
    } 
    public static void main(String[] args) 
    { 
        String s1 = "Hello World Programming"; 
        System.out.println(reverseWords(s1)); 

        String s2 = "The quick brown fox"; 
        System.out.println(reverseWords(s2)); 
    } 
}