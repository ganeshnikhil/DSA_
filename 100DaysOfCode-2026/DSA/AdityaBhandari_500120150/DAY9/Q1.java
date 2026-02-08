public class Q1{
    public static boolean plaindrome(String s){
        int start= 0;
        int end= s.length() - 1;
        while (start<end) {
            if (s.charAt(start) != s.charAt(end))
                return true;
            start++;
            end--;
        }
        return false;
    }
    public static void main(String[] args) {
        String s= "racecar";
        System.out.println(plaindrome(s));
        
        String s1= "hello";
        System.out.println(plaindrome(s1));

        String s2= "Madam";
        System.out.println(plaindrome(s2));
    }
}