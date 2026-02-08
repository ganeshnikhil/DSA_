public class Q2 {
    public static String removeDuplicates(String s) {
        String result = "";
        for (char c : s.toCharArray()) {
            if (result.indexOf(c) == -1) result += c;
        }
        return result;
    }

    public static void main(String[] args) {
        System.out.println(removeDuplicates("Siddhant")); 
    }
}