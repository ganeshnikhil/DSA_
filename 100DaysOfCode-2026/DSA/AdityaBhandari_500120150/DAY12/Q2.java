public class Q2{
    public static String removeDuplicate(String s) {
        StringBuilder sb = new StringBuilder(s.length());
        boolean[] seen = new boolean[256];
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (!seen[c]) {
                sb.append(c);
                seen[c] = true;
            }
        }
        
        return sb.toString();
    }
    public static void main(String[] args) {
        String s = "programming";
        System.out.println(removeDuplicate(s));
    }
}