public class Q3{
    public static String reverse(String input) {
        StringBuilder sb = new StringBuilder(input);
        return sb.reverse().toString();
    }

    public static void main(String[] args) {
        System.out.println(reverse("hello")); 
        System.out.println(reverse("world")); 
        System.out.println(reverse("12345")); 
    }
}
